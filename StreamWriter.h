#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <list>

class StreamWriter {
public:
    StreamWriter();

    void write(std::ostream &, std::list<std::pair<std::string, int>>, int);

    ~StreamWriter();
};

