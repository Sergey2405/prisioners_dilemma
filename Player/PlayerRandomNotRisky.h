#ifndef PLAYERRANDOMNOTRISKY_H
#define PLAYERRANDOMNOTRISKY_H

#include "Player.h"

class PlayerRandomNotRisky : public Player
{
    Q_OBJECT
public:
    PlayerRandomNotRisky();

    virtual bool comply() override;
};

#endif // PLAYERRANDOMNOTRISKY_H
