#include "DilemaFactory.h"
#include "QDebug"

DilemaFactory::DilemaFactory() :
    m_players(QList<Player*>())
{
    m_players. push_back( new PlayerAltruist());
    m_typeList.push_back((new PlayerAltruist())->metaObject()->className());

    m_players. push_back( new PlayerAltruistNotRisky());
    m_typeList.push_back((new PlayerAltruistNotRisky())->metaObject()->className());

    m_players. push_back( new PlayerGreed());
    m_typeList.push_back((new PlayerGreed())->metaObject()->className());

    m_players. push_back( new PlayerRandom());
    m_typeList.push_back((new PlayerRandom())->metaObject()->className());

    m_players. push_back( new PlayerRandomNotRisky());
    m_typeList.push_back((new PlayerRandomNotRisky())->metaObject()->className());
}

void DilemaFactory::playSeries(int player1Ix, int player2Ix, int numberOfGames)
{
    for(int i = 0; i < numberOfGames; i++) {
        m_players[player1Ix]->playGame(m_players[player2Ix]);
    }

    // TODO: delete these debugs?
    QString toPrint1 = "",
            toPrint2 = "";
    for(int i = 0; i < numberOfGames; i++) {
        toPrint1 += " " + QString::number(m_players[player1Ix]->history().at(i));
        toPrint2 += " " + QString::number(m_players[player2Ix]->history().at(i));
    }
    qDebug() << "Series player1" << toPrint1 << "\tbalance:" << m_players[player1Ix]->balance();
    qDebug() << "Series player2" << toPrint2 << "\tbalance:" << m_players[player2Ix]->balance();
}

QStringList *DilemaFactory::typeList()
{
    return &m_typeList;
}

