#include <getopt.h>
#include <pbf_output.hh>
#include <mongo/client/dbclient.h>

//#include <string>
//#include <iostream>
//#include <cstdlib>
//#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
   //parse command line options
   string sMongoDBAddr="",sMongoDBCollection="",sOutputPath="",sOptions="";
   stringstream tempss;
      
   int c;
   while(1)  {
      static struct option long_options[] =
	{
	   {"dbaddr", required_argument, 0, 'a'},
	   {"dbname", required_argument, 0, 'n'},
	   {"fout", required_argument, 0, 'f'},
	   {"options", required_argument, 0 ,'o'}, 
	   {0,0,0,0}
	};
      int option_index = 0;
      c = getopt_long(argc, argv, "a:n:f:o:",
		      long_options, &option_index);
      if(c==-1) break;
      
      switch(c)	{
       case 0:
	 cout<<"option "<<long_options[option_index].name<<" with value "<<optarg<<endl;
	 break;
	 
       case 'a':
	 sMongoDBAddr = optarg;
	 break;
       case 'n':
	 sMongoDBCollection = optarg;
	 break;
       case 'f':
	 sOutputPath = optarg;
	 break;
       case 'o':
	 sOptions = optarg;
	 break;
       default:
	 abort();
      }//end switch      	      
   }//end while
   
   cout<<"End"<<endl; 
   cout<<sMongoDBAddr<<" "<<sMongoDBCollection<<" "<<sOutputPath<<" "<<sOptions<<endl;
   
   //Connect to Mongodb
   mongo::DBClientConnection mongodb;
   try  {
      mongodb.connect(sMongoDBAddr.c_str());
   }
   catch(const mongo::DBException &e)  {
      cerr<<"Failed to initialize mongodb, caught exception "<<e.toString()<<endl<<"Exiting."<<endl;
      return -1;
   }
   
   //Open output file
   pbf_output outfile;
   if(outfile.open_file(sOutputPath,sOptions)!=0){	
      cerr<<"Error opening outfile. Quitting."<<endl;
      return -1;
   }

   //start loop through DB
   mongo::BSONObj doc;
   u_int64_t iLastTriggerTime=0;
   int eventHandle = -1;
   
   //ensure index by trigger time
   mongodb.ensureIndex(sMongoDBCollection,mongo::fromjson("{time:1}"));
   
   //get earliest time
   auto_ptr<mongo::DBClientCursor> cursor= mongodb.query(sMongoDBCollection.c_str(), QUERY("time"<<mongo::GT<<0).sort("time"));

   while(cursor->more()) {
      doc = cursor->next();
      
      if(!doc.isEmpty())  { //write to file
	 
	 u_int64_t triggertime = doc.getField("time").numberLong();
	 if(triggertime!=iLastTriggerTime)  {
	    //close previous event
	    if(eventHandle!=-1) {		 
	       outfile.close_event(eventHandle,true); //write immediately
	       eventHandle=-1;
	    }	    
	    //open a new event	 	    
	    if(outfile.create_event(doc.getField("time").numberLong(),eventHandle)!=0) {
	       cout<<"ERROR MAKING EVENT"<<endl;
	       continue;
	    }
///	    triggertime = iLastTriggerTime;
	    iLastTriggerTime=triggertime;
	 }
	 
	 //add data
	 int channel = doc.getIntField("channel");
	 int module  = doc.getIntField("module");
	 
	 //it's probably compressed so we can decompress it first (so that given options work)
	 //make this smarter in the future (should check run control doc to see if compression is on
	 //and then only decompress if needed)
	 int size=0;
	 char *raw = (char*)doc.getField("data").binData(size);
//	 char *dcopy = new char[size];
//	 copy(raw,raw+size,dcopy);
/*	 size_t extractLength;
	 snappy::GetUncompressedLength((const char*)raw,(size_t)size,&extractLength);
	 char  extracted[extractLength];
	 snappy::RawUncompress((const char*)raw,(size_t)size,(char*)extracted);
	 	 
	 outfile.add_data(eventHandle,channel,module,(char*)extracted,extractLength);
         delete[] extracted;
 */
	 outfile.add_data(eventHandle,channel,module,(char*)raw,size);
      }
      else {	 
	 break; //finished collection
      }      
   }//end while
   if(eventHandle!=-1)
     outfile.close_event(eventHandle,true);
   outfile.close_file();
   
   
   return 0;
   
}
