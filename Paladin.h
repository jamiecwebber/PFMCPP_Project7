#pragma once

struct Paladin : Character
{
    Paladin(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 10), name(name_) {}
    std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
