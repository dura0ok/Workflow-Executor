//
// Created by stepan7 on 28.07.22.
//

#include <map>
#include <memory>
#include "Creator.h"
#include "creators/ReadFileCreator.h"

Block *Creator::mapper(std::string command_name) {
    std::map<std::string, std::unique_ptr<Creator>>
    creators["asd"] = ReadFileCreator();

    return nullptr;
};
