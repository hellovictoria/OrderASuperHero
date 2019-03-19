#ifndef _WEAPON_H_
#define _WEAPON_H_
#include <string>

class Weapon
{
    public:
        virtual void setName(std::string name);
        std::string getName();
    protected:
        std::string name;
};

class NULLWeapon : public Weapon
{
    public:
        NULLWeapon();
};                

class goldenCudgel : public Weapon
{
    public:
        goldenCudgel();
};

class guidedMissile : public Weapon
{
    public:
        guidedMissile();
};

#endif

