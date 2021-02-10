#pragma once

#include "Character.h"

struct Dragon : Character
{
    Dragon(std::string name_, int hp_, int armor_) :  Character(hp_, armor_, 80), name(name_) {}
    std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
};
