#include "catch.hpp"
#include "Simulator.h"

TEST_CASE("Allatok szama szerint", "n-allat") {

    SECTION("Nulla allat")
    {
        std::string infile = "../../in1.txt";
        CHECK(Simulator(infile.c_str()).run() != "HIBA: Nemletezo fajl. Az alkalmazas kilep");
    }

    SECTION("Egy allat")
    {
        std::string infile = "../../in2.txt";
        CHECK(Simulator(infile.c_str()).run() != "HIBA: Nemletezo fajl. Az alkalmazas kilep");
    }

    SECTION("Sok egyfele allat")
    {
        std::string infile = "../../in3.txt";
        CHECK(Simulator(infile.c_str()).run() != "HIBA: Nemletezo fajl. Az alkalmazas kilep");
    }

    SECTION("Sok sokfele allat")
    {
        std::string infile = "../../in4.txt";
        CHECK(Simulator(infile.c_str()).run() != "HIBA: Nemletezo fajl. Az alkalmazas kilep");
    }

}