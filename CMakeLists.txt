cmake_minimum_required(VERSION 3.22)
project(learn)

set(CMAKE_CXX_STANDARD 20)

add_executable(learn main.cpp config/Config.cpp config/exceptions/BorderException.cpp config/exceptions/BorderException.h)
