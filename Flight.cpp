#include "Flight.h"

void Flight::setName(std::string name)
{
    this->name = name;
}

std::string Flight::getName()
{
    return this->name;
}

NULLFlight::NULLFlight()
{
    this->name = "NULL Flight";
}

somersaultCloud::somersaultCloud()
{
    this->name = "somersault Cloud";
}

highTechBooster::highTechBooster()
{
    this->name = " high Tech Booster";
}
