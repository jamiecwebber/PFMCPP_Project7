#pragma once

#include "Character.h"

struct Paladin : public Character
{
    Paladin(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 10), name(name_) {}
    ~Paladin() override {}
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
