#ifndef PLAYER_H
#define PLAYER_H

#define PLAYER_WIN_LOSE         5
#define PLAYER_WIN_WIN          3
#define PLAYER_LOSE_LOSE        1
#define PLAYER_LOSE_WIN         0

#define PLAYER_PAY_GAME         1
#define PLAYER_DEFAULT_COMPLY   true
#define PLAYER_INITIAL_BALANCE  +20

#include <QRandomGenerator>
#include <QObject>
#include <QString>

class Player : public QObject
{
public:
    Player();
    virtual ~Player();

    void playGame(Player *opponent, bool complyPlayer,  bool complyOpponent);
    virtual void playGame(Player *opponent);
    virtual bool comply();
    QList<qint8> history();
    int balance();

protected:
    QList<qint8> m_history;
    int m_balance;

};

#endif // PLAYER_H
