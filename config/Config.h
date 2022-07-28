#pragma once
#include <fstream>
#include <vector>

class Config {
   private:
      std::ifstream file;
      std::pair<bool, size_t> FindLineWithContent(const std::string& search);
      void ClearProgress();
      std::vector<std::string> GetRawBlocksInfo(size_t from, size_t to);
   public:
      std::string name;
      explicit Config(const std::string& name);
      void ParseConfig();
};

