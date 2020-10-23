#include "StreamWriter.h"


StreamWriter::StreamWriter() {
}

void StreamWriter::write(std::ostream &output, std::list<std::pair<std::string, int>> words, int total_freq) {
    for (auto &j : words) {
        output << j.first << ";" << j.second << ";" << (100.f * j.second / total_freq) << "%" << std::endl;
    }
}


StreamWriter::~StreamWriter() {
}
