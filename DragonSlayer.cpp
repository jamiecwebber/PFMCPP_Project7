#include "DragonSlayer.h"
#include "Dragon.h"
#include "AttackItem.h"
#include "Utility.h"

//DragonSlayer::DragonSlayer
DragonSlayer::DragonSlayer(std::string name_, int hp_, int armor_) : Character(hp_, armor_, 4), name(name_) 
{
    attackItem = std::unique_ptr<Item>(new AttackItem());
    helpfulItems =  makeHelpfulItems(4);
    defensiveItems = makeDefensiveItems(2);
}

//DragonSlayer::getName
const std::string& DragonSlayer::getName()
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {

        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note that items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
        if ( attackItem )
        {
            attackItem->use(this);
            attackItem.reset();
        }

        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
        
    }
        
    Character::attack(other);
        
}

//DragonSlayer::getStats
std::string DragonSlayer::getStats()
{
    //implement this
    return getCharacterStats(this);
}
