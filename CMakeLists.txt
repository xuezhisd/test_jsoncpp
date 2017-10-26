cmake_minimum_required(VERSION 2.8)
project(test_jsoncpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)

include_directories(.)

add_executable(test_jsoncpp ${SOURCE_FILES} lib_json/json_reader.cpp lib_json/json_value.cpp lib_json/json_writer.cpp)
