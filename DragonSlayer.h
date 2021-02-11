#pragma once

#include "Character.h"

struct DragonSlayer : public Character
{

    DragonSlayer(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 4), name(name_) {}
    ~DragonSlayer() override {}
    const std::string& getName() override;
    std::string getStats() override;

    void attack(Character& other) override;
private:
    const std::string name;
};
