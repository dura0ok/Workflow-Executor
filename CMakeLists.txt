cmake_minimum_required(VERSION 3.22)
project(learn)

set(CMAKE_CXX_STANDARD 20)

add_executable(learn main.cpp config/Config.cpp config/exceptions/BorderException.cpp config/exceptions/BorderException.h helpers/LineHelper.cpp helpers/LineHelper.h blocks/Block.cpp blocks/Block.h helpers/StringHelper.cpp helpers/StringHelper.h blocks/concrete_blocks/ReadFileBlock.cpp blocks/concrete_blocks/ReadFileBlock.h blocks/Creator.cpp blocks/Creator.h blocks/creators/ReadFileCreator.cpp blocks/creators/ReadFileCreator.h)
