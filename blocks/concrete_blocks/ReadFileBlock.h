#include "../Block.h"
#include <iostream>

class ReadFileBlock : public Block {
public:
    [[nodiscard]] std::string operation() override;
    ReadFileBlock() :Block(){};
};