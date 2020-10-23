#pragma once

#include <list>
#include <string>
#include <map>

class FromMapToList {
private:
    std::list<std::pair<std::string, int>> orderedList;
public:
    FromMapToList();

    void buildList(std::map<std::string, int> words);

    std::list<std::pair<std::string, int>> getList();

    ~FromMapToList();
};