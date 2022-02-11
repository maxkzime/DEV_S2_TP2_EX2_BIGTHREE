// TP2/EX2/functions.h
// exercice 2 : Les «BigThree»
// BODIN Maxime C2
// 22/10/02

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <vector>

#include "basketballplayer.h"

std::string bestPlayerEver(std::vector<BasketballPlayer> team);


bool sortBasketballPlayer(BasketballPlayer& bbp1, BasketballPlayer& bbp2);


void displayBasketballPlayer(BasketballPlayer& bbp);


#endif // FUNCTIONS_H
