#pragma once

#include "../Creator.h"
#include "../concrete_blocks/ReadFileBlock.h"

class ReadFileCreator : public Creator{
public:
    ReadFileCreator() :Creator(){};
    [[nodiscard]] Block* FactoryMethod() const override;
};


