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

    std::string print_all() const;
    void do_all(Animal::MOOD mood) const;
    Simulator(const Simulator&);
    Simulator& operator=(const Simulator&);

public:
    explicit Simulator(const char* file) : m_n_animals(0), m_file(), m_animals(new Animal*[0]) { m_file.open(file);}
    
    std::string run();
    Animal* create(std::istream& is);
};


#endif //DEFAULT_SIMULATOR_H
