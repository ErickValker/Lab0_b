#pragma once

#include <iostream>
#include <fstream>
#include <string>

class StreamReader {
private:
    std::istream &input;
    std::string curLine;
    int begin;
public:
    StreamReader(std::istream &);

    bool hasNext();

    std::string next();

    ~StreamReader();
};