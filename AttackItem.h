
#pragma once
#include "Item.h"

#include "Character.h"

struct AttackItem : public Item
{
    AttackItem() : Item("attack item", 10) { }
    ~AttackItem() override {}
    void use(Character* character) override;
};
