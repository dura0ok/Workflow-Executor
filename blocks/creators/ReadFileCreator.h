#pragma once

#include "../Creator.h"
#include "../concrete_blocks/ReadFileBlock.h"

class ReadFileCreator : Creator{
public:
    [[nodiscard]] Block* FactoryMethod() const override;
};


