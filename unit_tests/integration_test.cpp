#include "catch.hpp"
#include "Simulator.h"

TEST_CASE("Kivetelkezeles", "[exceptions]") {
    std::string infile = "../../in1.txt";
    CHECK(Simulator(infile.c_str()).run() != "HIBA: Nemletezo fajl. Az alkalmazas kilep");
}