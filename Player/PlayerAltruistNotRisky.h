#ifndef PLAYERALTRUISTNOTRISKY_H
#define PLAYERALTRUISTNOTRISKY_H

#include "Player.h"

class PlayerAltruistNotRisky : public Player
{
    Q_OBJECT
public:
    PlayerAltruistNotRisky();

    virtual bool comply() override;
};

#endif // PLAYERALTRUISTNOTRISKY_H
