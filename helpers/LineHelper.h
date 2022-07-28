#pragma once
#include <vector>
#include <string>
#include "../blocks/Block.h"
#include "../blocks/Creator.h"
#include <memory>


class LineHelper {
public:
    static std::vector<std::string> SplitStringByTokens(const std::string &s);
    static std::unique_ptr<Block> ParseLineToBlock(const std::vector<std::string> &splitLine);
};
