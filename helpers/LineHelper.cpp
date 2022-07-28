//
// Created by stepan7 on 13.07.22.
//

#include "LineHelper.h"
#include "../blocks/Creator.h"
#include <regex>
#include <iostream>


std::vector<std::string> LineHelper::SplitStringByTokens(const std::string& s) {
    std::vector<std::string> elems;
    std::regex re(R"(^(\d+)\s*([-+=*\/])\s*(\S+)\s+(.+)$)");
    std::cmatch result;

    if (std::regex_match(s.c_str(), result, re)) {
        for (int i = 1; i < result.size(); i++) {
            elems.push_back(result[i]);
        }
    }

    return elems;
}

std::unique_ptr<Creator> LineHelper::ParseLineToBlock(const std::vector<std::string> &splitLine) {
    int id = std::stoi(splitLine[0]);
    const std::string &command = splitLine[2];
    const std::string &args = splitLine[3];
    return std::make_unique<Block*>(Creator::mapper(command)->FactoryMethod());
}
