cmake_minimum_required(VERSION 3.17)
project(DataEncrptyDecode)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataEncrptyDecode main.cpp Codec.cpp Codec.h CodecFactory.cpp CodecFactory.h RequsetCodec.cpp RequsetCodec.h RequsetMsg.cpp RequsetMsg.h RespondCodec.cpp RespondCodec.h RespondMsg.cpp RespondMsg.h RequsetFactory.cpp RequsetFactory.h RespondFactory.cpp RespondFactory.h Factory.cpp Factory.h test.cpp)