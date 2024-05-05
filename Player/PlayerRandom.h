#ifndef PLAYERRANDOM_H
#define PLAYERRANDOM_H

#include "Player.h"

class PlayerRandom : public Player
{
    Q_OBJECT
public:
    PlayerRandom();

    virtual bool comply() override;

};

#endif // PLAYERRANDOM_H
