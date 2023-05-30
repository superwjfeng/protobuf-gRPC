cmake_minimum_required(VERSION 3.25)
project(protobuf)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(fast_start)
include_directories(proto3)

add_executable(protobuf
        fast_start/contacts.pb.cc
        fast_start/contacts.pb.h
        fast_start/main.cc
        proto3/contacts.pb.cc
        proto3/contacts.pb.h
        proto3/write.cc)
