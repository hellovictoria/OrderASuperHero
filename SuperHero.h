#ifndef _SUPERHERO_H_
#define _SUPERHERO_H_
#include <string>
#include "Flight.h"
#include "Shield.h"
#include "Weapon.h"
#include "SuperModuleFactory.h"

class SuperHero
{
    public:
        virtual void prepare() = 0;
        virtual void assemble();
        virtual void setName(std::string name);
        std::string getName();
    protected:
        std::string name;
        Flight* flight;
        Weapon* weapon;
        Shield* shield;
};

class SunWuKong : public SuperHero
{
    public:
        SunWuKong(SuperModuleFactory* moduleFactory);
        virtual void prepare();
    private:
        SuperModuleFactory* moduleFac;
};

class IronMan : public SuperHero
{
    public:
        IronMan(SuperModuleFactory* moduleFactory);
        virtual void prepare();
    private:
        SuperModuleFactory* moduleFac;
};

#endif

