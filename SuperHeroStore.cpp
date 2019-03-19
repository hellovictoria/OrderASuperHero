#include "SuperHeroStore.h"
#include "SuperHero.h"
#include "SuperModuleFactory.h"
#include <iostream>
#include <utility>
#include <map>
#include <vector>

enum e_SuperHeroType
{
    e_aggressive,e_defensive,e_supportive
};

std::vector<std::string> vstr_SuperHeroType = {"aggressive","defensive","supportive"};
std::map<std::string,enum e_SuperHeroType> map_SuperHeroType;

SuperHero* SuperHeroStore::orderSuperHero(std::string type)
{
    SuperHero* sHero = NULL;
    sHero = createSuperHero(type);

    sHero->prepare();
    sHero->assemble();
    return sHero;
}

void setMap_SuperHeroMap()
{
    enum e_SuperHeroType j = e_aggressive;
    for(auto iter=vstr_SuperHeroType.begin();iter!=vstr_SuperHeroType.end();iter++)
    {
        map_SuperHeroType.insert(std::pair<std::string,e_SuperHeroType>(*iter,j));
        j=(enum e_SuperHeroType)(j+1);
    }

    for(auto iter=map_SuperHeroType.begin();iter!=map_SuperHeroType.end();iter++)
    {
        std::cout << (*iter).first << " " << (*iter).second << std::endl;
    }
}

SuperHero* WuSuperHeroStore::createSuperHero(std::string type)
{
    SuperHero* sHero = NULL;
    SuperModuleFactory* sModuleFac = new WuModuleFactory();
    switch(map_SuperHeroType[type])
    {
        case e_aggressive:
            sHero = new SunWuKong(sModuleFac);
            sHero->setName("Sun Wu Kong");break;
        case e_defensive:
        case e_supportive:   //media
        default:
            break;
    }
    return sHero;
}


SuperHero* MarvelSuperHeroStore::createSuperHero(std::string type)
{
    SuperHero* sHero = NULL;
    SuperModuleFactory* sModuleFac = new MarvelModuleFactory();
    switch(map_SuperHeroType[type])
    {
        case e_aggressive:
            sHero = new IronMan(sModuleFac);
            sHero->setName("IronMan");break;
        case e_defensive:
        case e_supportive:
        default:
            break;
    }
    return sHero;
}




