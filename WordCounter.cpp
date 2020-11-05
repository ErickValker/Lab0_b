#include "WordCounter.h"

WordCounter::WordCounter() {

}

void WordCounter::readFile(std::istream &input){
    StreamReader reader(input);
    while (reader.hasNext()) {
        builder.put(reader.next());
    }
}

void WordCounter::writeFile(std::ostream &output) {
    converter.buildList(builder.getMap());
    writer.write(output, converter.getList(), builder.getTotalFreq());
}

WordCounter::~WordCounter(){

}
