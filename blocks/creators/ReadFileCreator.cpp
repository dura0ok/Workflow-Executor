//
// Created by stepan7 on 28.07.22.
//

#include "ReadFileCreator.h"

Block *ReadFileCreator::FactoryMethod() const {
    return new ReadFileBlock();
}
