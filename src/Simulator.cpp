#include <cstring>
#include "Simulator.h"


std::stringstream& Simulator::run() {
    std::stringstream out;
    if(!m_file)
    {
        out << "HIBA: Nemletezo fajl. Az alkalmazas kilep";
        return out;
    }

    load();
    out.str("Az allatok eletkedve a kovetkezokepp alakult: \n");
    char* kedvek = nullptr;
    m_file >> kedvek;
    for (int i = 0; i < std::strlen(kedvek); ++i)
    {
        switch (kedvek[i])
        {
            case 'j':
                do_all(Animal::MOOD::good);
                out << print_all();
                break;
            case 'a':
                do_all(Animal::MOOD::avg);
                out << print_all();
                break;
            case 'r':
                do_all(Animal::MOOD::bad);
                out << print_all();
                break;
        }
    }
    return out;
}

void Simulator::load() {
    m_file >> m_n_animals;
    m_animals = new Animal*[m_n_animals];
    for (int i = 0; i < m_n_animals; ++i)
        m_animals[i] = create(m_file);
}

Animal* Simulator::create (std::istream& is) {
    Animal* animal;

    char species;
    std::string name;
    int vim;

    is >> species >> name >> vim;

    switch (species)
    {
        case 'H':
            animal = new Fish(vim, name);
            break;
        case 'M':
            animal = new Bird(vim, name);
            break;
        case 'K':
            animal = new Dog(vim, name);
            break;
        default: break; //TODO: replace bad alloc
    }

    return animal;
}

std::stringstream& Simulator::print_all() const {
    std::stringstream ss;
    for (int i = 0; i < m_n_animals; ++i)
        ss << *m_animals[i];
    return ss;
}

void Simulator::do_all(Animal::MOOD mood) const {
    for (int i = 0; i < m_n_animals; ++i)
        m_animals[i]->update_vim(mood);
}
