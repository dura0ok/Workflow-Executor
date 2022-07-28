//
// Created by stepan7 on 28.07.22.
//

#include "ReadFileCreator.h"

std::unique_ptr<Block> ReadFileCreator::FactoryMethod(unsigned long id, const std::vector<std::string> &args) {
    return std::unique_ptr<Block>(ReadFileBlock(id, args));
}
