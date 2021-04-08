//
// Created by 汤汤 on 2021/4/7.
//

#include "TcpSocket.h"
#include <arpa/inet.h>
#include <errno.h>


TcpSocket::TcpSocket(int connfd) {
    m_socket = connfd;
}

int TcpSocket::connectToHost(std::string ip, unsigned short port, int timeout) {
    int ret = 0;
    if(port <= 0 || port > 65535 || timeout < 0){
        ret = ParamError;
        return ret;
    }
    m_socket = socket(AF_INET, SOCK_STREAM, 0);
    if(m_socket < 0){
        ret = errno;
        std::cout << "func socket() err:" << ret << std::endl;
        return ret;
    }
    struct sockaddr_in serverAddr;
    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(port);
    serverAddr.sin_addr.s_addr = inet_addr(ip.c_str());

    ret = connectTimeout(&serverAddr, timeout);
    if(ret < 0){
        //timeout
        if(ret == -1 && errno == ETIMEDOUT){
            ret = TimeoutError;
            return ret;
        }else{
            std::cout << "connectTimeOut errno:" << errno << std::endl;
            ret = errno;
            return ret;
        }
    }
    return ret;
    return 0;
}
