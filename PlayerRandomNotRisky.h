#ifndef PLAYERRANDOMNOTRISKY_H
#define PLAYERRANDOMNOTRISKY_H

#include "Player.h"

class PlayerRandomNotRisky : public Player
{
public:
    PlayerRandomNotRisky();

//    void playGame(Player *opponent) override;
    virtual bool comply() override;
//    bool comply();
};

#endif // PLAYERRANDOMNOTRISKY_H
