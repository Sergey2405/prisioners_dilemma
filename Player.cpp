#include "Player.h"

Player::Player()
{
    m_balance = 0;
}

void Player::playGame(Player *opponent, bool complyPlayer, bool complyOpponent )
{
    if(complyPlayer && complyOpponent) {
        m_history.push_back(PLAYER_WIN_WIN);
        m_balance += PLAYER_WIN_WIN;
        opponent->m_history.push_back(PLAYER_WIN_WIN);
        opponent->m_balance += PLAYER_WIN_WIN;
    } else if(complyPlayer && !complyOpponent) {
        m_history.push_back(PLAYER_LOSE_WIN);
        m_balance += PLAYER_LOSE_WIN;
        opponent->m_history.push_back(PLAYER_WIN_LOSE);
        opponent->m_balance += PLAYER_WIN_LOSE;
    } else if(!complyPlayer && complyOpponent) {
        m_history.push_back(PLAYER_WIN_LOSE);
        m_balance += PLAYER_WIN_LOSE;
        opponent->m_history.push_back(PLAYER_LOSE_WIN);
        opponent->m_balance += PLAYER_LOSE_WIN;
    } else {
        m_history.push_back(PLAYER_LOSE_LOSE);
        m_balance += PLAYER_LOSE_LOSE;
        opponent->m_history.push_back(PLAYER_LOSE_LOSE);
        opponent->m_balance += PLAYER_LOSE_LOSE;
    }
    m_balance -= PLAYER_PAY_GAME;
    opponent->m_balance -= PLAYER_PAY_GAME;
}

void Player::playGame(Player *opponent)
{
    Player::playGame(opponent, comply(), opponent->comply());
}

bool Player::comply()
{
    return PLAYER_DEFAULT_COMPLY;
}

QList<qint8> Player::history()
{
    return m_history;
}

int Player::balance()
{
    return m_balance;
}
