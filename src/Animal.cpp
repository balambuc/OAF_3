#include "Animal.h"
#include <iostream>


std::ostream& operator<<(std::ostream& os, const Animal& animal) {
    os << animal.m_name << " - ";

    if (animal.m_vim != animal.m_minvim)
    {
        os << animal.m_vim;
    }
    else
    {
        os << "DEAD";
    }

    os << '\n';

    return os;
}

void Fish::update_vim(Animal::MOOD mood) {
    if(m_vim == 0 || m_vim  == 100)
        return;

    switch (mood)
    {
        case Animal::MOOD::good :
            m_vim += m_good;
            break;
        case Animal::MOOD::avg :
            m_vim += m_avg;
            break;
        case Animal::MOOD::bad :
            m_vim += m_bad;
            break;
    }

    if(m_vim > 100)
        m_vim = 100;
    if(m_vim < 0)
        m_vim = 0;
}

void Bird::update_vim(Animal::MOOD mood) {
    if(m_vim == 0 || m_vim  == 100)
        return;

    switch (mood)
    {
        case Animal::MOOD::good :
            m_vim += m_good;
            break;
        case Animal::MOOD::avg :
            m_vim += m_avg;
            break;
        case Animal::MOOD::bad :
            m_vim += m_bad;
            break;
    }

    if(m_vim > 100)
        m_vim = 100;
    if(m_vim < 0)
        m_vim = 0;
}

void Dog::update_vim(Animal::MOOD mood) {
    if(m_vim == 0 || m_vim  == 100)
        return;

    switch (mood)
    {
        case Animal::MOOD::good :
            m_vim += m_good;
            break;
        case Animal::MOOD::avg :
            m_vim += m_avg;
            break;
        case Animal::MOOD::bad :
            m_vim += m_bad;
            break;
    }

    if(m_vim > 100)
        m_vim = 100;
    if(m_vim < 0)
        m_vim = 0;
}

