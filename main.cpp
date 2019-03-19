#include "SuperHeroStore.h"
#include "SuperHero.h"
#include <iostream>
#include <string>

int main()
{
    SuperHeroStore *wuStore = new WuSuperHeroStore();

    SuperHero *sHero = wuStore->orderSuperHero("aggressive");
    std::cout << "I ordered a " << sHero->getName() << std::endl;

    std::cout << "------------------------------------------------" << std::endl;

    SuperHeroStore* marvStore = new MarvelSuperHeroStore();
    sHero = marvStore->orderSuperHero("aggressive");
    std::cout << "I ordered a " << sHero->getName() << std::endl;

    return 0;
}
