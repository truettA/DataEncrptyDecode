//
// Created by 汤汤 on 2021/4/2.
//

#include "Factory.h"
#include "RespondCodec.h"
#include "RequsetCodec.h"
#include <iostream>

Codec *Factory::createObject(int flag) {
    Codec* code = nullptr;
    switch(flag){
        case 1:
            code = new RequsetCodec();
            break;
        case 2:
            code = new RespondCodec();
            break;
        case 3:
            code = new TestCodec();
            break;
        default:
            std::cout << "unknow" << std::endl;
            break;
    }
    return code;
}


