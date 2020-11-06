#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <list>
#include "StreamReader.h"
#include "MapBuilder.h"
#include "FromMapToList.h"
#include "StreamWriter.h"

class WordCounter {
private:
    MapBuilder builder;
public:
    WordCounter();

    void readFile(std::istream &);

    void writeFile(std::ostream &);

    ~WordCounter();
};



