#pragma once
#include <fstream>

class Config {
   private:
      std::ifstream file;
      std::pair<bool, size_t> FindLineWithContent(const std::string& search);
      void ClearProgress();
   public:
      std::string name;
      explicit Config(const std::string& name);
      void ParseConfig();
};

