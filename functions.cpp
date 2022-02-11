// TP2/EX2/functions.cpp
// exercice 2 : Les «BigThree»
// BODIN Maxime C2
// 22/10/02

#include <iostream>
#include <string>
#include <vector>

#include "functions.h"
#include "basketballplayer.h"

// Best player ever = best Average score
// param : vector of the players
// return : the best player name
std::string bestPlayerEver(std::vector<BasketballPlayer> team)
{
    double bestAverageScore = team.begin()->computeScorePerGame();
    std::string bestPlayerName = team.begin()->getItsName();

    //for(std::vector<BasketballPlayer>::iterator it = team.begin();it != team.end(); ++it)
    for(auto it : team)
    {
        if(it.computeScorePerGame() > bestAverageScore)
        {
            bestAverageScore = it.computeScorePerGame();
            bestPlayerName = it.getItsName();
        }
    }

    return bestPlayerName;
}

// foncteur to sort the vector
// param : 2 players
// return : bool of the best player
bool sortBasketballPlayer(BasketballPlayer& bbp1, BasketballPlayer& bbp2)
{
    return (bbp1.computeScorePerGame() > bbp2.computeScorePerGame());
}

// foncteur to print the names of the players (and their score per game)
// param : a player
void displayBasketballPlayer(BasketballPlayer& bbp)
{
    std::cout << bbp.getItsName() << '\n';
    std::cout << bbp.computeScorePerGame() << "\n\n";
}
