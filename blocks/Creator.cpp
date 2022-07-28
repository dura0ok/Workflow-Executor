#include <map>
#include <memory>
#include "Creator.h"
#include "creators/ReadFileCreator.h"
#include "creators/ReplaceBlockCreator.h"


std::unique_ptr<Creator> Creator::mapper(const std::string& command_name) {
    std::map<std::string, std::unique_ptr<Creator>> creators;
    creators["readfile"] = std::make_unique<ReadFileCreator>();
    creators["replace"] = std::make_unique<ReplaceBlockCreator>();

    return std::move(creators[command_name]);
}
