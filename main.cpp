#include<iostream>
#include "header.h"
#include "WordCounter.h"

int main(int argc, char *argv[]) {
    if ((argc == 1) || ((argc == 2) && (argv[1][1] == 'h')) || ((argc == 2) && (argv[1][1] != 'h')) || (argc > 3)) {
        cout << "Usage: [input] [output]\n"
                "[input] - insert input file pathname\n"
                "[output] - insert output file pathname\n";
        return 0;
    }
    ifstream input(argv[1], fstream::in);
    ofstream output(argv[2], fstream::out);
    if (!input) {
        cout << "Can't open the input file.\n\n";
        return 1;
    }
    if (!output) {
        cout << "Can't open the output file.\n\n";
        input.close();
        return 1;
    }

    WordCounter counter;
    counter.readFile(input);
    counter.writeFile(output);
    return 0;
}