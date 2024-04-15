#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player
{
public:
    Player();
//    virtual ~Dilema;

    void playGame0(Player *oponent,  bool silentOponent, bool silent);
    virtual void playGame(Player *oponent) = 0;
    QList<qint8> history();

protected:
    QList<qint8> m_history;
    int m_balance;

};

#endif // PLAYER_H
