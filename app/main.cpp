#include <iostream>
#include <fstream>
#include "Simulator.h"


using namespace std;

int main(int arc, char** argv) {
    string infile;
    cin >> infile;
    cout << Simulator(infile).run();

    return 0;
}