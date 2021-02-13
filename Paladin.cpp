#include "Paladin.h"

// Paladin::Paladin
Paladin::Paladin(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 10), name(name_) 
    {
        std::cout << "Paladin constructor" << std::endl;
    }


const std::string& Paladin::getName()
{
    return name;
}

// Paladin::getStats
std::string Paladin::getStats()
{
    return "paladin stats from utility function";
}
