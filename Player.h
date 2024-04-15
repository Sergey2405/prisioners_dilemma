#ifndef PLAYER_H
#define PLAYER_H

#define PLAYER_WIN_LOSE     5
#define PLAYER_WIN_WIN      3
#define PLAYER_LOSE_LOSE    1
#define PLAYER_LOSE_WIN     0

#include <QObject>

class Player
{
public:
    Player();
//    virtual ~Dilema;

    void playGame(Player *oponent,  bool silentOponent, bool silent);
    virtual void playGame(Player *oponent) = 0;
    QList<qint8> history();
    int balance();

protected:
    QList<qint8> m_history;
    int m_balance;

};

#endif // PLAYER_H
