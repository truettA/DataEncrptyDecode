//
// Created by 汤汤 on 2021/4/7.
//

#include "TcpServer.h"
#include <stdio.h>
#include <arpa/inet.h>
#include <unistd.h>

int TcpServer::setListen(unsigned short port) {
    int ret = 0;
    struct sockaddr_in servaddr;
    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(port);
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);

    m_lfd = socket(AF_INET, SOCK_STREAM, 0);
    if(m_lfd == -1){
        ret = errno;
        return ret;
    }

    int on = 1;
    ret = setsockopt(m_lfd, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on));
    if(ret == -1){
        ret = errno;
        return ret;
    }

    ret = listen(m_lfd, 128);

    return 0;
}


void TcpServer::closeFd() {
    close(m_lfd);
}
