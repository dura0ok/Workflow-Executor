#pragma once

#include "../Creator.h"
#include "../concrete_blocks/ReadFileBlock.h"

class ReadFileCreator : Creator{
public:
    ReadFileCreator() :Creator(){};
    [[nodiscard]] Block* FactoryMethod() const override;
};


