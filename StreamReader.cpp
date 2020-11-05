#include "StreamReader.h"

StreamReader::StreamReader(std::istream &input) : input(input) {

}

bool StreamReader::hasNext() {
    if (begin < curLine.length()) {
        return true;
    }
    while (getline(input, curLine)) {
        begin = 0;
        for (char c : curLine) {
            if (isalnum(c)) {
                return true;
            }
        }
        begin++;
    }
    return false;
}

std::string StreamReader::next() {
    bool hasResult = false;
    std::string result;
    int end = begin;
    for (int i = begin; i < curLine.length(); i++) {
        char c = curLine[i];
        if (hasResult) {
            if (isalnum(c)) {
                return result;
            }
            begin++;
        } else if (!isalnum(c)) {
            if (begin != end) {
                result = curLine.substr(begin, end - begin);
                hasResult = true;
            }
            begin = end + 1;
        }
        end++;
    }
    if (result.length() == 0) {
        result = curLine.substr(begin, end - begin);
        begin = curLine.length();
    }
    return result;
}


StreamReader::~StreamReader() {
}