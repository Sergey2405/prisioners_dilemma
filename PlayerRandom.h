#ifndef PLAYERRANDOM_H
#define PLAYERRANDOM_H

#include "Player.h"

class PlayerRandom : public Player
{
public:
    PlayerRandom();

    void playGame(Player *oponent);
};

#endif // PLAYERRANDOM_H
