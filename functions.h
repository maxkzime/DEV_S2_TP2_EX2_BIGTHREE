// TP2/EX2/functions.h
// exercice 2 : Les «BigThree»
// BODIN Maxime C2
// 22/10/02

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <vector>

#include "basketballplayer.h"

// Best player ever = best Average score
// param : vector of the players
// return : the best player name
std::string bestPlayerEver(std::vector<BasketballPlayer> team);

// foncteur to sort the vector
// param : 2 players
// return : bool of the best player
bool sortBasketballPlayer(BasketballPlayer& bbp1, BasketballPlayer& bbp2);

// foncteur to print the names of the players
// param : a player
void displayBasketballPlayer(BasketballPlayer& bbp);


#endif // FUNCTIONS_H
