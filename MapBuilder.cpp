#include "MapBuilder.h"

MapBuilder::MapBuilder() {
}

void MapBuilder::put(std::string word) {
    if (words[word]) {
        words[word]++;
    } else {
        words[word] = 1;
    }
    totalFreq++;
}

std::map<std::string, int> MapBuilder::getMap() {
    return words;
}

int MapBuilder::getTotalFreq() {
    return totalFreq;
}

MapBuilder::~MapBuilder() {
}
