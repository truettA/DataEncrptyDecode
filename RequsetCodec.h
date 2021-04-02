//
// Created by 汤汤 on 2021/4/2.
//

#ifndef DATAENCRPTYDECODE_REQUSETCODEC_H
#define DATAENCRPTYDECODE_REQUSETCODEC_H

#include "COdec.h"

class RequsetCodec :public Codec{
public:
    RequsetCodec();
    ~RequsetCodec();
public:
    std::string encodeMsg();
    void* decodeMsg();
};


#endif //DATAENCRPTYDECODE_REQUSETCODEC_H
