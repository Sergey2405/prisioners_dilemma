#ifndef DILEMAFACTORY_H
#define DILEMAFACTORY_H

#include "PlayerRandom.h"

class DilemaFactory
{
public:
    DilemaFactory();

    void playSeries(int player1Ix, int player2Ix, int numberOfGames);

protected:
    QList<Dilema*> m_players;

};

#endif // DILEMAFACTORY_H
