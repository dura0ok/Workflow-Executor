#include <iostream>
#include <fstream>
#include "config//Config.h"

int main(){
    try{
        Config config("conf.txt");
        config.ParseConfig();
        std::cout << "adsasd";
    }catch (const std::exception &e) {
        std::cout << e.what();
    }
    return 0;
}
