#include "PlayerRandom.h"
#include "Player.h"
#include <QRandomGenerator>

PlayerRandom::PlayerRandom()
{

}

void PlayerRandom::playGame(Player *oponent)
{
    playGame0(oponent, QRandomGenerator::global()->generate() % 2 == 0, QRandomGenerator::global()->generate() % 2 == 0);

};
