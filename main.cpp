// TP2/EX2/main.cpp
// exercice 2 : Les «BigThree»
// BODIN Maxime C2
// 22/10/02

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "basketballplayer.h"
#include "functions.h"

int main()
{
    std::cout << "BODIN Maxime C2" << "\n\n";

    BasketballPlayer tony("Parker", 1100, 18083);

    std::cout << tony.computeScorePerGame() << "\n\n";

    BasketballPlayer tim("Duncan", 1392, 26448);
    BasketballPlayer manu("Ginobili", 1057, 14058);

    std::vector<BasketballPlayer> bigThree{tony, tim, manu};

    std::cout << "Le meilleur joueur des Big Three est : " << bestPlayerEver(bigThree) << "\n\n";

    for_each (bigThree.begin(), bigThree.end(), displayBasketballPlayer);std::cout << "\n\n";

    std::sort(bigThree.begin(),bigThree.end(), sortBasketballPlayer);

    for_each (bigThree.begin(), bigThree.end(), displayBasketballPlayer);std::cout << "\n\n";

    return 0;
}
