#include <iostream>
#include "Config.h"
#include "exceptions/BorderException.h"
#include "../helpers/RegexHelper.h"

Config::Config(const std::string &name) {
    this->name = name;
    this->file.open(name);
    if(!this->file.is_open()) throw std::runtime_error("Could not open file");
    //this->file.exceptions(std::ifstream::failbit);
}

void Config::ParseConfig() {
    auto startLine = FindLineWithContent("desc");
    auto endLine = FindLineWithContent("csed");

    std::cout << startLine.second << " " << endLine.second << std::endl << "Data:" << std::endl;
    if(!startLine.first || !endLine.first){
        throw BorderException();
    }

    auto blocks = this->GetRawBlocksInfo(startLine.second + 1, endLine.second);
    for(auto & block : blocks){
        auto res = RegexHelper::SplitString(block);
        std::cout << res.size(); // 0 ?

    }

}

std::pair<bool, size_t> Config::FindLineWithContent(const std::string& search) {
    std::string line;
    unsigned int curLine = 0;
    while(getline(this->file, line)) {

        curLine++;
        if (line.find(search, 0) != std::string::npos) {
            ClearProgress();
            return std::make_pair(true, curLine);
        }
        if(this->file.eof()) break;
    }


    ClearProgress();
    return std::make_pair(false, curLine);
}

void Config::ClearProgress() {
    //file.clear();
    file.seekg(0);
}

std::vector<std::string> Config::GetRawBlocksInfo(size_t from, size_t to) {
    std::vector<std::string> data;
    data.reserve(to-from);
    unsigned int curLine = 0;
    std::string line;
    while(getline(this->file, line)) {
        curLine++;
        if(curLine < from || curLine >= to) continue;
        data.push_back(line);
    }

    return data;
}

