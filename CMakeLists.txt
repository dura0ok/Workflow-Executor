cmake_minimum_required(VERSION 3.22)
project(learn)

set(CMAKE_CXX_STANDARD 20)

add_executable(learn main.cpp config/Config.cpp helpers/LineHelper.cpp blocks/Block.cpp helpers/StringHelper.cpp blocks/concrete_blocks/ReadFileBlock.cpp  blocks/Creator.cpp  blocks/creators/ReadFileCreator.cpp exceptions/FileNotFoundException.cpp blocks/concrete_blocks/ReplaceBlock.cpp blocks/concrete_blocks/ReplaceBlock.h blocks/creators/ReplaceBlockCreator.cpp blocks/creators/ReplaceBlockCreator.h)
