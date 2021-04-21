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
    //设置监听端口
    int setListen(unsigned short port);
    //建立连接
    TcpSocket* acceptConn(int timeout = 1000);
    //关闭连接
    void closeFd();
private:
    //connet 返回文件描述符号
    int m_lfd;
};


#endif //DATAENCRPTYDECODE_TCPSERVER_H
