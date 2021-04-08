//
// Created by 汤汤 on 2021/4/7.
//

#ifndef DATAENCRPTYDECODE_SOCKETPOOL_H
#define DATAENCRPTYDECODE_SOCKETPOOL_H

#include <iostream>
#include <queue>


class SocketPool {
public:
    SocketPool();
    ~SocketPool();

public:
    int getFd();  //获取文件描述符
    int putFd(); //回收文件描述符
private:
    std::queue<int> m_fds;
};


#endif //DATAENCRPTYDECODE_SOCKETPOOL_H
