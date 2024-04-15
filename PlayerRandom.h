#ifndef PLAYERRANDOM_H
#define PLAYERRANDOM_H

#include "Dilema.h"

class PlayerRandom : public Dilema
{
public:
    PlayerRandom();

    void playGame(Dilema *oponent);
};

#endif // PLAYERRANDOM_H
