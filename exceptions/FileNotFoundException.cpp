#include "FileNotFoundException.h"
#include <utility>

FileNotFoundException::FileNotFoundException(std::string fileName) {
    this->fileName = std::move(fileName);
}

const char *FileNotFoundException::what() const noexcept {
    std::string msg =  std::string("File not found: ") + this->fileName;
    char *messageData= new char[msg.length() + 1];
    strcpy(messageData, msg.c_str());
    return messageData;
}
