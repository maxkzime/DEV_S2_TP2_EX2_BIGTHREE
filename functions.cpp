// TP2/EX2/functions.cpp
// exercice 2 : Les «BigThree»
// BODIN Maxime C2
// 22/10/02

#include <iostream>
#include <string>
#include <vector>

#include "functions.h"
#include "basketballplayer.h"

std::string bestPlayerEver(std::vector<BasketballPlayer> team)
{
    double bestAverageScore = team.begin()->computeScorePerGame();
    std::string bestPlayerName = team.begin()->getItsName();

    for(std::vector<BasketballPlayer>::iterator it = team.begin();
        it != team.end(); ++it)
    {
        if(it->computeScorePerGame() > bestAverageScore)
        {
            bestAverageScore = it->computeScorePerGame();
            bestPlayerName =it->getItsName();
        }
    }

    return bestPlayerName;
}


bool sortBasketballPlayer(BasketballPlayer& bbp1, BasketballPlayer& bbp2)
{
    return (bbp1.computeScorePerGame() > bbp2.computeScorePerGame());
}

void displayBasketballPlayer(BasketballPlayer& bbp)
{
    std::cout << bbp.getItsName() << "\n\n";
}
