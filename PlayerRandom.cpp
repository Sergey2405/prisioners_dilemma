#include "PlayerRandom.h"
#include "Player.h"
#include <QRandomGenerator>

PlayerRandom::PlayerRandom()
{

}

bool PlayerRandom::comply()
{
    return QRandomGenerator::global()->generate() % 2 == 0;
};
