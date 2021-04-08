//
// Created by 汤汤 on 2021/4/7.
//

#ifndef DATAENCRPTYDECODE_TCPSOCKET_H
#define DATAENCRPTYDECODE_TCPSOCKET_H

#define TIMEOUT 1000
#include <iostream>


class TcpSocket {
public:
    TcpSocket();
    TcpSocket(int connfd);
    ~TcpSocket();
public:
    //连接服务器
    int connectToHost(std::string ip, unsigned short port, int timeout = TIMEOUT);
    //发送数据
    int sendMsg(std::string sendData, int timeout = TIMEOUT);
    //接收数据
    int recvMsg(int timeout = TIMEOUT);
    //断开连接
    void disConnect();
public:
    enum ErrorType {ParamError = 3001, TimeoutError, PeerCloseError, MallocError};
private:
    //设置非阻塞
    int setNonBlock(int fd);
    //设置I/O为阻塞模式
    int setBlock(int fd);
    //读超时监测函数， 不包含读操作
    int writeTimeout(unsigned int wait_seconds);
    //写超时监测函数， 不包含写操作
    int readTimeout(unsigned int wait_seconds);
    //带连接超时connect函数
    int connectTimeout(struct sockaddr_in *addr, unsigned int wait_seconds);
    //每次从缓冲区中读取n个字符
    int readn(void *buf, int count);
    //每次写入n个字符到缓冲区
    int writen(const void *buf, int count);
private:
    int m_socket; //用于套接字通信
};


#endif //DATAENCRPTYDECODE_TCPSOCKET_H
