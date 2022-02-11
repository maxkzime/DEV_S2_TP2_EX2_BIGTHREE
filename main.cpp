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

    // Tony Parker, 1100 games, 18083 points
    BasketballPlayer tony("Parker", 1100, 18083);

    std::cout << "La moyenne de points par match de " << tony.getItsName() << " est de : " << tony.computeScorePerGame() << "\n\n";

    // Tim Duncan, 1392 games, 26448 points
    BasketballPlayer tim("Duncan", 1392, 26448);
    // Manu Ginobili, 1057 games, 14058 points
    BasketballPlayer manu("Ginobili", 1057, 14058);

    std::vector<BasketballPlayer> bigThree{tony, tim, manu};

    // print the best player name
    std::cout << "Le meilleur joueur des Big Three est : " << bestPlayerEver(bigThree) << "\n\n";

    // print all the players
    for_each (bigThree.begin(), bigThree.end(), displayBasketballPlayer);std::cout << "\n\n";

    // sort vector of the players by score per game
    std::sort(bigThree.begin(),bigThree.end(), sortBasketballPlayer);

    // print all the players
    for_each (bigThree.begin(), bigThree.end(), displayBasketballPlayer);std::cout << "\n\n";

    return 0;
}
