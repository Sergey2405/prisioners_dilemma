#ifndef PLAYERPHILOSOPHER_H
#define PLAYERPHILOSOPHER_H

#include "Player.h"

class PlayerPhilosopher : public Player
{
    Q_OBJECT
public:
    PlayerPhilosopher();

    virtual bool comply() override;
};

#endif // PLAYERPHILOSOPHER_H
