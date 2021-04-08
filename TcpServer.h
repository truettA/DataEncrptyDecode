//
// Created by 汤汤 on 2021/4/7.
//

#ifndef DATAENCRPTYDECODE_TCPSERVER_H
#define DATAENCRPTYDECODE_TCPSERVER_H
#include "TcpSocket.h"

class TcpServer {
public:
    TcpServer();
    ~TcpServer();
public:
    int setListen(unsigned short port);
    TcpSocket* acceptConn(int timeout = 1000);
    void closeFd();
private:
    int m_lfd;
};


#endif //DATAENCRPTYDECODE_TCPSERVER_H
