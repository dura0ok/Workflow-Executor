#include <iostream>
#include <fstream>
#include "config//Config.h"

int main(){
    try{
        Config config("conf.txt");
        config.ParseConfig();
    }catch (const std::exception &e) {
        std::cout << "Exception opening/reading file" << " " << e.what();
    }
    return 0;
}
