#ifndef PLAYERALTRUIST_H
#define PLAYERALTRUIST_H

#include "Player.h"

class PlayerAltruist :public Player
{
    Q_OBJECT
public:
    PlayerAltruist();

    virtual bool comply() override;
};

#endif // PLAYERALTRUIST_H
