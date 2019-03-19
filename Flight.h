#ifndef _FLIGHT_H_
#define _FLIGHT_H_
#include <string>

class Flight
{
    public:
        virtual void setName(std::string name);
        std::string getName();
    protected:
        std::string name;
};

class NULLFlight : public Flight
{
    public:
        NULLFlight();
};

class somersaultCloud : public Flight
{
    public:
        somersaultCloud();    
};

class highTechBooster : public Flight
{
    public:
        highTechBooster();
}; 

#endif
