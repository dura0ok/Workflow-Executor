#include <iostream>
#include "Config.h"
#include "exceptions/BorderException.h"

Config::Config(const std::string &name) {
    this->name = name;
    this->file.open(name);
    this->file.exceptions(std::ifstream::failbit);
}

void Config::ParseConfig() {
    auto startLine = FindLineWithContent("desc");
    auto endLine = FindLineWithContent("csed");
    if(!startLine.first || !endLine.first){
        throw BorderException();
    }

}

std::pair<bool, size_t> Config::FindLineWithContent(const std::string& search) {
    std::string line;
    unsigned int curLine = 0;
    while(getline(this->file, line)) { // I changed this, see below
        curLine++;
        if (line.find(search, 0) != std::string::npos) {
            return std::make_pair(true, curLine);
        }
    }


    ClearProgress();
    return std::make_pair(false, curLine);
}

void Config::ClearProgress() {
    file.clear();
    file.seekg(0);
}

