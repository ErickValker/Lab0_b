#pragma once

#include <string>
#include <map>

class MapBuilder {
private:
    std::map<std::string, int> words;
    int totalFreq;
public:
    MapBuilder();

    void put(std::string);

    std::map<std::string, int> getMap();

    int getTotalFreq();

    ~MapBuilder();
};