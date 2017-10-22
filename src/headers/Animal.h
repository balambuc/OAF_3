#ifndef DEFAULT_ANIMAL_H
#define DEFAULT_ANIMAL_H


#include <string>
#include <utility>


class Animal {
protected:
    const int m_minvim = 0;
    const int m_maxvim = 100;
    int m_vim;
    std::string m_name;

public:
    enum MOOD {
        good, avg, bad
    };
    Animal(int starting_vim, std::string name) : m_vim(starting_vim), m_name(std::move(name)) {}

    virtual void update_vim(MOOD mood) = 0;
    friend std::ostream& operator<<(std::ostream& os, const Animal& anim);
};

class Fish : public Animal {
private:
    const int m_good = 1;
    const int m_avg = -3;
    const int m_bad = -5;

public:
    Fish(int starting_vim, std::string name) : Animal(starting_vim, std::move(name)) {}

    void update_vim(Animal::MOOD mood) override;
};

class Bird : public Animal {
private:
    const int m_good = 2;
    const int m_avg = -1;
    const int m_bad = -3;

public:
    Bird(int starting_vim, std::string name) : Animal(starting_vim, std::move(name)) {}

    void update_vim(Animal::MOOD mood) override;
};

class Dog : public Animal {
private:
    const int m_good = 3;
    const int m_avg = 3;
    const int m_bad = -10;

public:
    Dog(int starting_vim, std::string name) : Animal(starting_vim, std::move(name)) {}

    void update_vim(Animal::MOOD mood) override;
};




#endif //DEFAULT_ANIMAL_H
