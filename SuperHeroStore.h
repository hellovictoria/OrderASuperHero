#ifndef _SUPERHEROSTORE_H_
#define _SUPERHEROSTORE_H_
#include <string>

class SuperHero;

class SuperHeroStore
{
    public:
        SuperHero* orderSuperHero(std::string type);
    protected:
        virtual SuperHero* createSuperHero(std::string type)=0;
};

class WuSuperHeroStore : public SuperHeroStore
{
    protected:
        virtual SuperHero* createSuperHero(std::string type);
};

class MarvelSuperHeroStore : public SuperHeroStore
{
    protected:
        virtual SuperHero* createSuperHero(std::string type);
};

#endif

