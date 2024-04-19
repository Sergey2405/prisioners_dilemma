#ifndef PLAYERALTRUIST_H
#define PLAYERALTRUIST_H

#include "Player.h"

class PlayerAltruist :public Player
{
public:
    PlayerAltruist();

    virtual bool comply() override;
};

#endif // PLAYERALTRUIST_H
