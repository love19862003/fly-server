/********************************************************************

  Filename:   NetMessage

  Description:NetMessage

  Version:  1.0
  Created:  30:3:2015   14:09
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __NetMessage_H__
#define __NetMessage_H__
#include <algorithm>
#include <memory>
#include <functional>

namespace ShareSpace {
  namespace NetSpace {

   
    class  NetBuffer
    {
    public:
      explicit NetBuffer(size_t len);
      virtual ~NetBuffer();
      NetBuffer& operator = (NetBuffer&& buffer);

      inline bool isLock() const { return m_lock; }
      inline bool lock() { m_lock = true; return m_lock; }
      inline bool hasWrite() const { return length() > 0; }
      inline bool hasRead() const { return needReadLength() > 0; }
      inline bool isFull() const { return m_writePos >= m_maxLen; }
      inline bool canRead(size_t len) const { return len <= needReadLength(); }

      inline size_t length() const { return m_writePos; }
      inline size_t maxLength() const { return m_maxLen; }
      inline size_t needReadLength() const { return m_writePos - m_readPos; }

      inline const char* data() const { return m_buffer; }
      inline char* data() { return m_buffer; }

      inline const char* writeData() const { return m_buffer + m_writePos; }
      inline char* writeData() { return m_buffer + m_writePos; }
      inline char* writeData(size_t len);  // set  m_writePos += len && return the write pointer before add 

      inline const char* readData() const { return m_buffer + m_readPos; }
      inline char* readData() { return m_buffer + m_readPos; }
      char* readData(size_t len);   // set  m_readPos += len && return the read pointer before add 

      void clearReadBuffer();                             // clear read data
      void reset();                                       // reset buffer
      bool tailNetBuffer(const NetBuffer& buffer);        // add buffer to this tail && if space is not enough, resize it
      bool tailData(const char* base, size_t len);        // add buffer to this tail && if space is not enough, resize it

      //add a pod data to this tail && if space is not enough, resize it
      template <typename PODTYPE>
      bool tailPod(const PODTYPE& t) {
        resize(m_writePos + sizeof(PODTYPE));
        return tail(static_cast<void*>(const_cast<PODTYPE*>(&t)), sizeof(PODTYPE));
      }

      bool headNetBuffer(const NetBuffer& buffer);      // add buffer to this head && if space is not enough, resize it
      bool headData(const char* base, size_t len);      // add buffer to this head && if space is not enough, resize it
      
      //add a pod data to this head && if space is not enough, resize it
      template <typename PODTYPE>
      bool headPod(const PODTYPE& t) {
        resize(m_writePos + sizeof(PODTYPE));
        return head(static_cast<void*>(const_cast<PODTYPE*>(&t)), sizeof(PODTYPE));
      }

      // add buffer to this head, you must ensure the head is has enough space .. 
      template <typename PODTYPE>
      bool setHeadPod(const PODTYPE& t) {
        return setHead(static_cast<void*>(const_cast<PODTYPE*>(&t)), sizeof(PODTYPE));
      }

      // read data to buffer . the read len is std::min<m_writePos - m_readPos, buffer.m_maxLen - buffer.m_writePos >
      bool readBuffer(NetBuffer& buffer);

      // read a pod data 
      template <typename PODTYPE>
      bool readPod(PODTYPE& t) {
        char* p = readData(sizeof(PODTYPE));
        if(!p) { return false; }
        t = *((PODTYPE*)(p));
        return true;
      }
    protected:
    private:
      // resize  a new len if len > m_maxLen;
      bool resize(size_t len);
      // add base to this tail . you must ensure has enough space 
      bool tail(void* base, size_t len);
      // add base to this head . you must ensure has enough space
      bool head(void* base, size_t len);
      // add base to this head . you must ensure len < m_writePos
      bool setHead(void* base, size_t len);
    private:
      char* m_buffer;
      size_t m_maxLen;       // buffer space len
      size_t m_writePos;     // buffer write len
      size_t m_readPos;      // buffer read len
      bool m_lock;           // buffer is lock . if lock you can only read
      NetBuffer& operator = (const NetBuffer&) = delete;
      NetBuffer(const NetBuffer&) = delete;
    };

    typedef std::unique_ptr<NetBuffer> BufferPointer;
    typedef unsigned int SessionId;
    enum {
      INVALID_SESSION_ID = 0,
    };

//     class NetBlockBase {
//     public:
//       typedef std::unique_ptr<NetBlockBase> BlockPtr;
//       explicit NetBlockBase(SessionId s, size_t size) :m_data(nullptr), m_state(_STATE_INIT_), m_session(s) {
//         if(size > 0) { m_data = std::move(BufferPointer(new NetBuffer(s))); }
//       }
//       virtual ~NetBlockBase() { m_data.reset(); }
// 
//       static BlockPtr sMakeDefaultBlock(SessionId s, size_t size);
// 
//       enum State {
//         _STATE_INIT_ = 1,
//         _STATE_BODY_ = 2,
//         _STATE_DONE_ = 3,
//       };
//       const BufferPointer& data() const { return m_data; }
//       BufferPointer& data() { return m_data; }
//       bool headDone() const { return m_state == _STATE_BODY_; }
//       bool bodyDone() const { return m_state == _STATE_DONE_; }
//       const SessionId& session() const { return m_session; }
//       virtual bool push(const char* data, size_t len) = 0;
//       virtual BlockPtr clone(SessionId) = 0;
//       virtual bool recv(BufferPointer& buf) = 0;
// 
//     protected:
//       BufferPointer m_data;
//       State m_state;
//       SessionId m_session;
//     };

    class NetBlock {
    public:
      struct head {
        typedef unsigned int head_len_type;
        typedef unsigned short head_mask_type;
        typedef unsigned int  head_check_type;

        head_len_type   _len;     //message stream len
        head_mask_type  _mask;    //message mask
        head_check_type _check;   //check msg valid
      };

      enum State {
        _STATE_INIT_ = 1,
        _STATE_BODY_ = 2,
        _STATE_DONE_ = 3,
      };

      typedef std::function<void(NetBlock*)> DecryptEncryptFunType; // decrypt or encrypt function . you can use nullptr or you self
      // constructor for send 
      explicit NetBlock(SessionId s, BufferPointer buffer, const DecryptEncryptFunType& encryptFun = nullptr);
      // constructor for recv 
      explicit NetBlock(SessionId s);
      ~NetBlock();
      const BufferPointer& data() const { return m_data; }
      BufferPointer& data() { return m_data; }
      bool headDone() const { return m_state == _STATE_BODY_; }
      bool bodyDone() const { return m_state == _STATE_DONE_; }
      const SessionId& session() const { return m_session; }
      bool recv(BufferPointer& buf, const DecryptEncryptFunType& decryptFun = nullptr);
      NetBlock* clone(SessionId s);
    private:
      // encrypt send message
      void encrypt(const DecryptEncryptFunType& fun);
      // read recv head
      bool recvHead(BufferPointer& buf, const DecryptEncryptFunType& fun);
      // read recv body
      bool recvBody(BufferPointer& buf, const DecryptEncryptFunType& fun);
    private:
      NetBlock(const NetBlock&) = delete;
      NetBlock& operator = (const NetBlock&) = delete;
      NetBlock& operator = (NetBlock&&) = delete;
      head m_head;
      BufferPointer m_data;
      State m_state;
      SessionId m_session;
    };
  }
}
#endif