#include "PlayerRandom.h"
#include "Player.h"

PlayerRandom::PlayerRandom()
{

}

bool PlayerRandom::comply()
{
    return QRandomGenerator::global()->generate() % 2 == 0;
};
