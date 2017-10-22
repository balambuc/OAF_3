#ifndef DEFAULT_SIMULATOR_H
#define DEFAULT_SIMULATOR_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <utility>
#include <vector>
#include <Animal.h>


class Simulator {
private:
    int m_n_animals;
    std::fstream m_file;
    Animal** m_animals;
    void load();
    std::stringstream& print_all() const;
    void do_all(Animal::MOOD mood) const;

public:
    explicit Simulator(std::string file) { m_file.open(file);}

    std::stringstream& run();
    Animal* create(std::istream& is);
};


#endif //DEFAULT_SIMULATOR_H
