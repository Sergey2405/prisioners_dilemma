#include "DilemaFactory.h"
#include "QDebug"

DilemaFactory::DilemaFactory() :
    m_players(QList<Player*>())
{
    componateTypeList();
//    m_players.push_back(new PlayerRandom());
//    m_players.push_back(new PlayerRandomNotRisky());
    m_players.push_back(new PlayerAltruist());
    m_players.push_back(new PlayerAltruistNotRisky());
//    m_players.push_back(new PlayerGreed);
    qDebug() << "DilemaFactory::DilemaFactory" << m_players[0]->metaObject()->className();

    playSeries(0,1,50);

}

void DilemaFactory::playSeries(int player1Ix, int player2Ix, int numberOfGames)
{
    for(int i = 0; i < numberOfGames; i++) {
        m_players[player1Ix]->playGame(m_players[player2Ix]);
    }
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

void DilemaFactory::componateTypeList()
{
    m_typeList.push_back((new PlayerAltruist())->metaObject()->className());
    m_typeList.push_back((new PlayerAltruistNotRisky())->metaObject()->className());
    m_typeList.push_back((new PlayerGreed())->metaObject()->className());
    m_typeList.push_back((new PlayerRandom())->metaObject()->className());
    m_typeList.push_back((new PlayerRandomNotRisky())->metaObject()->className());
}
