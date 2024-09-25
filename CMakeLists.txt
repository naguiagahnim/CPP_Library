cmake_minimum_required(VERSION 3.28)
project(TP1)

set(CMAKE_CXX_STANDARD 17)

add_executable(TP1 module.cpp
        main.cpp
        outils.h
        livre.h
        livre.cpp
)
