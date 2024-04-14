#include "DilemaFactory.h"

DilemaFactory::DilemaFactory() :
    m_players(QList<Dilema*>())
{
    m_players.push_back(new Player());
    m_players.push_back(new Player());
}
