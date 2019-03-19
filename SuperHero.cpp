#include "SuperHero.h"
#include "SuperModuleFactory.h"
#include <iostream>

void SuperHero::setName(std::string name)
{
    this->name = name;
}

std::string SuperHero::getName()
{
    return this->name;
}

void SuperHero::assemble()
{
    std::cout << "Producing " + this->name << std::endl;
    std::cout << "assemble flight module: " << (this->flight)->getName() << std::endl;
    std::cout << "assemble Weapon module: " << (this->weapon)->getName() << std::endl;
    std::cout << "assemble Shield module: " << (this->shield)->getName() << std::endl;
    std::cout << "Done!" << std::endl;
}

SunWuKong::SunWuKong(SuperModuleFactory* moduleFactory)
{
    this->moduleFac = moduleFactory;
}

void SunWuKong::prepare()
{
    this->flight = (this->moduleFac)->createFlight();
    this->weapon = (this->moduleFac)->createWeapon();
    this->shield = (this->moduleFac)->createShield();
}


IronMan::IronMan(SuperModuleFactory* moduleFactory)
{
    this->moduleFac = moduleFactory;
}

void IronMan::prepare()
{
    this->flight = new NULLFlight();
    this->weapon = new NULLWeapon();
    this->shield = (this->moduleFac)->createShield();
}

