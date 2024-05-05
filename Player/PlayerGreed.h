#ifndef PLAYERGREED_H
#define PLAYERGREED_H

#include "Player.h"

class PlayerGreed : public Player
{
    Q_OBJECT
public:
    PlayerGreed();

    virtual bool comply() override;
};

#endif // PLAYERGREED_H
