#pragma once
#include <iostream>
#include "Block.h"
#include <memory>

class Creator {
public:
    Creator()= default;
    virtual ~Creator()= default;
    [[nodiscard]] virtual Block* FactoryMethod() const = 0;

    static std::unique_ptr<Creator> mapper(const std::string& command_name);
};