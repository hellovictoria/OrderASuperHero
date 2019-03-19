#ifndef _SUPERMODULEFACTORY_H_
#define _SUPERMODULEFACTORY_H_

#include "Flight.h"
#include "Weapon.h"
#include "Shield.h"

class SuperModuleFactory
{
    public:
        virtual Flight* createFlight()=0;
        virtual Weapon* createWeapon()=0;
        virtual Shield* createShield()=0;
};

class WuModuleFactory : public SuperModuleFactory
{
    public:
        virtual Flight* createFlight();
        virtual Weapon* createWeapon();
        virtual Shield* createShield();
};

class MarvelModuleFactory : public SuperModuleFactory
{
    public:
        virtual Flight* createFlight();
        virtual Weapon* createWeapon();
        virtual Shield* createShield();
};

#endif
