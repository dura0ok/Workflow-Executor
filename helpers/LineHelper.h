#pragma once
#include <vector>
#include <string>
#include "../blocks/Block.h"


class LineHelper {
public:
    static std::vector<std::string> SplitStringByTokens(const std::string &s);

    static Block *ParseLineToBlock(const std::vector<std::string> &splitLine);
};
