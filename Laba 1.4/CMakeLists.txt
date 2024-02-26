cmake_minimum_required(VERSION 3.27)
project(Laba_1_4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Laba_1_4 main.cpp
        Train.cpp
        TSorter.cpp)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/test.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})