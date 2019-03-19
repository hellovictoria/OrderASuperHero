#ifndef _SHIELD_H_
#define _SHIELD_H_
#include <string>

class Shield
{
    public:
        virtual void setName(std::string name);
        std::string getName();
    protected:
        std::string name;
};

class tigerSkirt : public Shield
{
    public:
        tigerSkirt();
};

class ironManSuit : public Shield
{
    public:
        ironManSuit();
};

#endif

