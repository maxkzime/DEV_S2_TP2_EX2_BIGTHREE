// TP2/EX2/basketballplayer.cpp
// exercice 2 : Les «BigThree»
// BODIN Maxime C2
// 22/10/02

#include "basketballplayer.h"

const std::string &BasketballPlayer::getItsName() const
{return itsName;}

double BasketballPlayer::computeScorePerGame()
{return itsScore / itsGamesNb;}
