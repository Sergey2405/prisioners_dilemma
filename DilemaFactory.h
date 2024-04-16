#ifndef DILEMAFACTORY_H
#define DILEMAFACTORY_H

#include "PlayerRandom.h"
#include "PlayerRandomNotRisky.h"

class DilemaFactory
{
public:
    DilemaFactory();

    void playSeries(int player1Ix, int player2Ix, int numberOfGames);

protected:
    QList<Player*> m_players;

};

#endif // DILEMAFACTORY_H
