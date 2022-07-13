//
// Created by stepan7 on 13.07.22.
//

#include "RegexHelper.h"
#include <regex>

std::vector<std::string> RegexHelper::SplitString(std::string s) {
    std::vector<std::string> elems;
    std::regex re("^(\\d+) (=) ([a-zA-Z0-9_.-]+) ([a-zA-Z0-9_.-]+)$");
    std::sregex_token_iterator iter(s.begin(), s.end(), re, -1);
    std::sregex_token_iterator end;

    while (iter != end) {
        if (iter->length()) {
            elems.push_back(*iter);
        }
        ++iter;
    }

    return elems;
}
