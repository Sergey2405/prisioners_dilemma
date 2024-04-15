#include "Player.h"

Player::Player()
{
    m_balance = 0;
}

void Player::playGame(Player *oponent, bool silentOponent, bool silent)
{
    if(silentOponent && silent) {
        m_history.push_back(PLAYER_WIN_WIN);
        m_balance += PLAYER_WIN_WIN;
        oponent->m_history.push_back(PLAYER_WIN_WIN);
        oponent->m_balance += PLAYER_WIN_WIN;
    } else if(silentOponent && !silent) {
        m_history.push_back(PLAYER_LOSE_WIN);
        m_balance += PLAYER_LOSE_WIN;
        oponent->m_history.push_back(PLAYER_WIN_LOSE);
        oponent->m_balance += PLAYER_WIN_LOSE;
    } else if(!silentOponent && silent) {
        m_history.push_back(PLAYER_LOSE_WIN);
        m_balance += PLAYER_LOSE_WIN;
        oponent->m_history.push_back(PLAYER_WIN_LOSE);
        oponent->m_balance += PLAYER_WIN_LOSE;
    } else {
        m_history.push_back(PLAYER_LOSE_LOSE);
        m_balance += PLAYER_LOSE_LOSE;
        oponent->m_history.push_back(PLAYER_LOSE_LOSE);
        oponent->m_balance += PLAYER_LOSE_LOSE;
    }
}

QList<qint8> Player::history()
{
    return m_history;
}

int Player::balance()
{
    return m_balance;
}
