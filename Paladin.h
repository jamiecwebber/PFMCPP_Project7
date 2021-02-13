#pragma once

#include "Character.h"

struct Paladin : public Character
{
    Paladin(std::string name_, int hp_, int armor_);
    ~Paladin() override {}
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
