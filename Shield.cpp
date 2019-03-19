#include "Shield.h"

void Shield::setName(std::string name)
{
    this->name = name;
}

std::string Shield::getName()
{
    return this->name;
}

tigerSkirt::tigerSkirt()
{
    this->name = "tiger Skirt";
}

ironManSuit::ironManSuit()
{
    this->name = "ironMan Suit";
}
