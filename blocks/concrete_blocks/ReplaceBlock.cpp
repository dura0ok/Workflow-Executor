//
// Created by stepan7 on 28.07.22.
//

#include "ReplaceBlock.h"
#include <regex>

std::string ReplaceBlock::operation() {
    std::string replacedString = this->args[0];
    replacedString = std::regex_replace(replacedString, std::regex(this->args[1]), this->args[2]);
    return replacedString;
}
