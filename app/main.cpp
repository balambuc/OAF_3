#include <iostream>
#include "Simulator.h"


using namespace std;

int main(int argc, char** argv) {
    string infile;
    if(argc == 1)
        cin >> infile;
    else
        infile = argv[1];

    cout << Simulator(infile.c_str()).run();

    return 0;
}