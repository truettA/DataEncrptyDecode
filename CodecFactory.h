//
// Created by 汤汤 on 2021/4/1.
//

#ifndef DATAENCRPTYDECODE_CODECFACTORY_H
#define DATAENCRPTYDECODE_CODECFACTORY_H
#include "Codec.h"

class CodecFactory {
public:
    CodecFactory();
    ~CodecFactory();
public:
    Codec* creatCodec();
};


#endif //DATAENCRPTYDECODE_CODECFACTORY_H
