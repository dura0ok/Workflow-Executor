#pragma once
#include <iostream>

class BorderException : public std::exception{
   public:
      const char * what() const noexcept override {
          return "No find desc or csed in config file";
      }
};


