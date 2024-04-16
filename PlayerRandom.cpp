#include "PlayerRandom.h"
#include "Player.h"
#include <QRandomGenerator>

PlayerRandom::PlayerRandom()
{

}

void PlayerRandom::playGame(Player *opponent)
{
    Player::playGame(opponent, comply(), opponent->comply());

}

bool PlayerRandom::comply()
{
    return QRandomGenerator::global()->generate() % 2 == 0;
};
