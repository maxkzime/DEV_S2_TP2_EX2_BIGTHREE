// TP2/EX2/basketballplayer.cpp
// exercice 2 : Les «BigThree»
// BODIN Maxime C2
// 22/10/02

#include <iostream>
#include <string>

#include "basketballplayer.h"

const std::string &BasketballPlayer::getItsName() const
{
    return itsName;
}

BasketballPlayer::BasketballPlayer(std::string name, int gamesNB, int score)
{
    itsName = name; itsGamesNB = gamesNB; itsScore = score;
}

double BasketballPlayer::computeScorePerGame()
{
    return itsScore / itsGamesNB;
}
