#include "FromMapToList.h"

FromMapToList::FromMapToList() {
}

bool compare(std::pair<std::string, int> a, std::pair<std::string, int> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    } else {
        return a.second > b.second;
    }
}

void FromMapToList::buildList(std::map<std::string, int> words) {
    std::list<std::pair<std::string, int>> listOfPairs(words.begin(), words.end());
    listOfPairs.sort(compare);
    orderedList = listOfPairs;
}

std::list<std::pair<std::string, int>> FromMapToList::getList() {
    return orderedList;
}

FromMapToList::~FromMapToList() {
}
