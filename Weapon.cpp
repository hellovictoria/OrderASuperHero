#include "Weapon.h"

void Weapon::setName(std::string name)
{
    this->name = name;
}

std::string Weapon::getName()
{
    return this->name;
}

NULLWeapon::NULLWeapon()
{
    this->name = "NULL Weapon";
}

goldenCudgel::goldenCudgel()
{
    this->name = "Golden Cudgel";
}

guidedMissile::guidedMissile()
{
    this->name = "Guided Missile";
}
