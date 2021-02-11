#pragma once

#include "Character.h"

struct Dwarf : public Character
{
    Dwarf(std::string name_, int hp_, int armor_) :  Character(hp_, armor_, 4), name(name_)
    {

    }
    ~Dwarf() override {}
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
