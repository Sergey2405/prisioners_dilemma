#include "PlayerRandom.h"
#include "Dilema.h"
#include <QRandomGenerator>

PlayerRandom::PlayerRandom()
{

}

void PlayerRandom::playGame(Dilema *oponent)
{
    playGame0(oponent, QRandomGenerator::global()->generate() % 2 == 0, QRandomGenerator::global()->generate() % 2 == 0);

};
