//
// Created by 汤汤 on 2021/4/1.
//

#ifndef DATAENCRPTYDECODE_CODEC_H
#define DATAENCRPTYDECODE_CODEC_H
#include <string>

class Codec {
public:
    Codec();
    ~Codec();
public:
    std::string encodeMsg();
    void* decodeMsg();
};


class TestCodec :public Codec{
public:
    TestCodec();
    ~TestCodec();
};

#endif //DATAENCRPTYDECODE_CODEC_H
