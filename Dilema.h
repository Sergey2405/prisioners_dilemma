#ifndef DILEMA_H
#define DILEMA_H

#include <QObject>

class Dilema
{
public:
    Dilema();
//    virtual ~Dilema;

    void playGame(Dilema *oponent,  bool silentOponent, bool silent);
    QList<qint8> history();

protected:
    QList<qint8> m_history;
    int m_balance;

};

#endif // DILEMA_H
