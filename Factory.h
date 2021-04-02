//
// Created by 汤汤 on 2021/4/2.
//

#ifndef DATAENCRPTYDECODE_FACTORY_H
#define DATAENCRPTYDECODE_FACTORY_H
#include "Codec.h"

class Factory {
public:
    Factory();
    ~Factory();
public:
    Codec* createObject(int flag);
};






#endif //DATAENCRPTYDECODE_FACTORY_H
