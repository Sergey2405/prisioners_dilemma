#ifndef DILEMAFACTORY_H
#define DILEMAFACTORY_H

#include "Player/PlayerRandom.h"
#include "Player/PlayerRandomNotRisky.h"
#include "Player/PlayerAltruist.h"
#include "Player/PlayerGreed.h"
#include "Player/PlayerAltruistNotRisky.h"

class DilemaFactory
{
public:
    DilemaFactory();

    void playSeries(int player1Ix, int player2Ix, int numberOfGames);

protected:
    QList<Player*> m_players;

};

#endif // DILEMAFACTORY_H
