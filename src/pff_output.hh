#ifndef PFF_OUTPUT_HH_
#define PFF_OUTPUT_HH_

// *************************************************************
// 
// Protobuf File Format
//
// File   :     pff_output.hh
// Author :     Daniel Coderre, LHEP, Universitaet Bern
// Brief  :     Top end access for writing .pff files
// 
// *************************************************************

//
// includes
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include "protobufDef.pb.h"

using namespace std;

// Insert Structs
//    : Used to ensure proper ordering of data files. The sets are sorted such that 
//      events are sorted by time stamp. Channels are sorted by module/channel number
//      and data is sorted by time stamp. These will be converted to pbf objects upon write
//      
struct InsertData
{
   pbf::Event_Channel_Data data;
   bool operator<(const InsertData& rhs)  {
      if(!data.has_time) return true;
      return (data.time<rhs.data.time() ? true : false);
   }
   
};
struct InsertChannel
{
   set<InsertData> data;
};
struct MCPair
{
   int module;
   int channel;
   bool operator<(const MCPair& rhs) {
      if(module==rhs.module)
	return (channel<rhs.channel ? true : false);
      return (module < rhs.module ? true : false);
   }   
};
struct InsertEvent
{
   u_int64_t timestamp;
   bool operator<(const InsertBuff& rhs)  {
      return (timestamp<rhs.timestamp ? true : false);
   }
   map<MCPair,InsertChannel> channels;
};


class pff_output
{
 public: 
   
   // 
   // Constructors
   // 
   // pff_output()
   //   : Default constructor
   // 
   pff_output();
   //
   // pff_output(string path, string options)
   //   : Initialize object and call open_file. Raise exception on failure
   // 
   pff_output(string path, string options);
   //
   // ~pff_output()
   //    : Will write out buffer (if not empty) and close file (if open)
   // 
   virtual ~pff_output();
   
   //
   // int open_file(string path, string options)
   //   : Opens the file at path. Path should not specify a file extension. 
   //     Options are separated by a colon. Possible options are: 
   //                    - n{int} where int is the number of events per file
   //                             zero means all events in one file (default)
   //                    - z zip output using snappy
   //                    - b{int} give maximum buffer size in events before 
   //                             buffer is forced to be written (default 1000)
   //     Example string "n1000:b100:z" 
   // 
   int open_file(string path, string options);
   
   // int create_event(long int TimeStamp, long int &handle)
   //   : Create an event and give it an identifying handle. Note the handle is 
   //     not the event number. The event number is only defined upon writing so 
   //     that event numbers in the file are consecutive. If timeStamp is defined
   //     as -1, it will be set to the earliest dataTime stamp provided. If no dataTime 
   //     stamp is provided it is set to zero and written in arbitrary order.
   // 
   int create_event(unsigned long long int timestamp, int &handle);
   //
   // int add_data(int handle, int channel, char* data, long int dataTime=-1)
   // int add_data(int handle, int channel, int module, char* data, longInt dataTime=-1)
   //   : Add the data contained in the data buffer to an event. dataTime represents the 
   //     time of the first sample in the data buffer. The default value of -1 means that
   //     the first sample has the same time as the event timestamp.
   // 
   int add_data(int handle, int channel, char* data, size_t dataSize, u_int64_t dataTime=0);
   int add_data(int handle, int channel, int module, char* data, size_t dataSize, u_int64_t dataTime=0);
   //
   // int close_event(int handle, bool write=false)
   //   : If you are done adding data to an event, close it and put it in the output buffer
   //     The output buffer is sorted by time stamp. The output buffer is either written out
   //     by a manual call to the write function or when it reaches the size defined when the
   //     file it opened. Setting the write flag to true puts the event directly into the file
   //     along with any other contents of the output buffer.
   // 
   int close_event(int handle, bool write=false);
   //
   // int write(u_int64_t timestamp=0)
   //   : Write all events up to timestamp. If timestamp is set to zero, write 
   //     all events in the output buffer. 
   // 
   int write(u_int64_t timestamp=0);
   
   //
   // void close_file();
   //   : Write all events in the output buffer and close the file. Note: any events that were
   //     created but not closed will be lost!
   // 
   void close_file();
   
 private:
   
   u_int32_t        m_uiEventNumber;        //current event number
   
   //Internal Options
   int              m_iEventsPerFile;
   int              m_iMaxBufferSize;
   bool             m_bCompress_snappy;
   string           m_sFilePathBase;
   int              m_iCurrentFileNumber;
   
   //Internal functions
   int              ParseOptions(string options);
   int              OpenNextFile();
   
   //Data storage
   int        m_iCurrentHandle;                  // each event gets a handle
   map<int,InsertEvent> m_mapOpenEvents;          // Currently open events stored in a map
   set<InsertEvent>    m_setWriteBuffer;

   //the current file handle and weird google::protobuf write objects
   ofstream            m_outfile;
   google::protobuf::io::ZeroCopyOutputStream *m_protoOut;
   google::protobuf::io::CodedOutputStream    *m_protoCOut;
   
};
#endif