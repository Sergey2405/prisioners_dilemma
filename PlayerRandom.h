#ifndef PLAYERRANDOM_H
#define PLAYERRANDOM_H

#include "Player.h"

class PlayerRandom : public Player
{
public:
    PlayerRandom();

    void playGame(Player *opponent) override;
    virtual bool comply() override;

};

#endif // PLAYERRANDOM_H
