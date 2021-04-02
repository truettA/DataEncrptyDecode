//
// Created by 汤汤 on 2021/4/2.
//

#ifndef DATAENCRPTYDECODE_RESPONDCODEC_H
#define DATAENCRPTYDECODE_RESPONDCODEC_H
#include "Codec.h"

class RespondCodec :public Codec {
public:
    RespondCodec();
    ~RespondCodec();
public:
    std::string encodeLMsg();
    void* decodeMsg();
};



#endif //DATAENCRPTYDECODE_RESPONDCODEC_H
