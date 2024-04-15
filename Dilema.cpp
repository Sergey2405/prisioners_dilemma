#include "Dilema.h"

Dilema::Dilema()
{
    m_balance = 0;
}

void Dilema::playGame0(Dilema *oponent, bool silentOponent, bool silent)
{
    if(silentOponent && silent) {
        m_history.push_back(3);
        m_balance += 3;
        oponent->m_history.push_back(3);
        oponent->m_balance += 3;

    } else if(silentOponent && !silent) {
        m_history.push_back(0);
        oponent->m_history.push_back(5);
        oponent->m_balance += 5;
    } else if(!silentOponent && silent) {
        m_history.push_back(5);
        m_balance += 3;
        oponent->m_history.push_back(0);
    } else {
        m_history.push_back(1);
        m_balance += 1;
        oponent->m_history.push_back(1);
        oponent->m_balance += 1;
    }
}

QList<qint8> Dilema::history()
{
    return m_history;
}
