// TP2/EX2/basketballplayer.h
// exercice 2 : Les «BigThree»
// BODIN Maxime C2
// 22/10/02

#ifndef BASKETBALLPLAYER_H
#define BASKETBALLPLAYER_H

#include <string>

class BasketballPlayer
{
private:
    std::string itsName;
    int itsGamesNb;
    int itsScore;

public:
    BasketballPlayer(std::string name,
                     int gamesNb,
                     int score) :
        itsName(name),
        itsGamesNb(gamesNb),
        itsScore(score)
    {}

    double computeScorePerGame();
    const std::string &getItsName() const;
};

#endif // BASKETBALLPLAYER_H
