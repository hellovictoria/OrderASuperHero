#include "SuperModuleFactory.h"
#include "Flight.h"
#include "Weapon.h"
#include "Shield.h"

Flight* WuModuleFactory::createFlight()
{
    Flight* flight = new somersaultCloud();
    return flight;
}

Flight* MarvelModuleFactory::createFlight()
{
    Flight* flight = new highTechBooster();
    return flight;
}

Weapon* WuModuleFactory::createWeapon()
{
    Weapon* weapon = new goldenCudgel();
    return weapon;
}

Weapon* MarvelModuleFactory::createWeapon()
{
    Weapon* weapon = new guidedMissile();
    return weapon;
}

Shield* WuModuleFactory::createShield()
{
    Shield* shield = new tigerSkirt();
    return shield;
}

Shield* MarvelModuleFactory::createShield()
{
    Shield* shield = new ironManSuit();
    return shield;
}
