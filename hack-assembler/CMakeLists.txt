cmake_minimum_required(VERSION 3.23)
project(hack_assembler)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hack_assembler
        main.cpp
        parser.cpp
        parser.h
        symbol_table.cpp
        symbol_table.h
        translator.cpp
        translator.h)
