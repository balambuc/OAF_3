#include <iostream>
#include "Simulator.h"


using namespace std;

int main(int argc, char** argv) {
    char* infile;
    if(argc == 1)
        cin >> infile;
    else
        infile = argv[1];

    cout << Simulator(infile).run();

    return 0;
}