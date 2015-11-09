/********************************************************************

  Filename:   GKHttp

  Description:GKHttp

  Version:  1.0
  Created:  6:9:2015   14:35
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __Http2_H__
#define __Http2_H__
#include <string>
#include <functional>
#include <memory>
#include "http/http.hpp"
namespace HttpSpace{

  struct HttpConfig
  {
    std::string _address;
    unsigned int _port;
    unsigned int _thread;

  };
    class Http2
    {
    public:
        
        typedef  std::function<std::string(const std::string&, const std::string&) > HttpCallFunType;
        explicit Http2(const HttpConfig&);
        virtual ~Http2();

        bool init(HttpCallFunType call);
        void poll(float);
        void shutDown();

    protected:
    private:
        class Impl;
        std::unique_ptr<Impl> m_impl;
    };

}
#endif