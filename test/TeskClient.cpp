/********************************************************************

  Filename:   TeskClient

  Description:TeskClient

  Version:  1.0
  Created:  14:9:2015   16:31
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
  *********************************************************************/
#include "server/ServerBase.h"
#include "test/TeskClient.h"
#include "message/protocal_all.h"
using namespace ShareSpace;
namespace Server {

  class Client::Impl : public  ServerBase
  {
  public:
    explicit Impl(ServerOption& op, const std::string& file) : ServerBase(op, file) { 
    
    }
    virtual ~Impl() {
      m_clientConn.reset();
    }
  protected:
    enum state {
      conning_login ,
      conning_gate,
    };
    virtual bool doInit() override { 
      Utility::MyJson json(propertyFile());
      if(!LoadConfig::sLoadNetConfig(json, "login", m_loginConfig)) { return false; }
      if(!LoadConfig::sLoadNetConfig(json, "gate", m_gateConfig)) { return false; }
      if(!resetNet(m_gateConfig)) { return false; }
      return true; 
    }
    virtual bool doRegister() override { 
      BindNetObjectCall(m_clientConn, Pro::GateS2C, handleGateInfo);
      BindNetObjectCall(m_clientConn, Pro::LoginResultS2C, handleLoginResult);
      return true; 
    }
    virtual bool doCommand() override { return true; }
    virtual void doRun(unsigned int) override { return ; }
    virtual void doStop() override { return ; }

    bool resetNet(const NetSpace::NetConfig& config) {
      m_clientConn.reset(new ClientSocketConn(config,
        m_pid,
        option()._net,
        std::bind(&Impl::handleMessage, this, ph::_1),
        std::bind(&Impl::onConnect, this, ph::_1),
        std::bind(&Impl::onDisConnect, this, ph::_1, ph::_2)
        ));
      return true;
    }

    void handleMessage(const ClientSocketCache& cache) { 
      std::cout << "handle server message " <<  ClientSocketBase::messagePtr(cache)->DebugString()<< std::endl;
      ClientSocketBase::debugCache(cache);
    }
    void handleGateInfo(const ClientSocketCache& cache) { 
      ClientSocketBase::debugCache(cache);
    }
    void handleLoginResult(const ClientSocketCache& cache) { 
      m_pid = ClientSocketBase::extraId(cache);
      ClientSocketBase::debugCache(cache);
      Pro::PlayerData player;
      player.set_id(m_pid);
      player.mutable_base()->set_coin(111);
      player.mutable_base()->set_level(111);
      player.mutable_base()->set_money(111);
      player.mutable_base()->set_freemoney(111);
      m_clientConn->sendMessage(player, m_pid);
    }
    void onConnect(Session s) {
      Pro::LoginC2S msg;
      msg.set_name("client");
      msg.set_password("client");
      m_clientConn->sendMessage(msg);
    }
    void onDisConnect(const PlayerId& pid, Session s) {
    
    }
  private:
    ClientSocketConnPointer m_clientConn;
    NetSpace::NetConfig m_gateConfig;
    NetSpace::NetConfig m_loginConfig;
    PlayerId m_pid = 0;
    state m_state = conning_login;
  };

}

TemplateServerCreateInterface(Client)
