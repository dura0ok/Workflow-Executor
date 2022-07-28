#pragma once
#include <iostream>
#include "Block.h"

class Creator {
public:
    virtual ~Creator()= default;
    [[nodiscard]] virtual Block* FactoryMethod() const = 0;
};