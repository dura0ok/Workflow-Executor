#pragma once
#include <iostream>
#include "Block.h"

class Creator {
public:
    Creator()= default;
    virtual ~Creator()= default;
    [[nodiscard]] virtual Block* FactoryMethod() const = 0;

    Block* mapper(std::string command_name);
};