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
    QStringList *typeList();

protected:
    QList<Player*> m_players;
    QStringList m_typeList;

private:
    void componateTypeList();

};

#endif // DILEMAFACTORY_H
