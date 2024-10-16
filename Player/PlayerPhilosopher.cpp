#include "PlayerPhilosopher.h"

PlayerPhilosopher::PlayerPhilosopher()
{}

bool PlayerPhilosopher::comply()
{

    if(m_history.size() > 1) {
        if((m_history.last() == PLAYER_LOSE_WIN || m_history.last() == PLAYER_LOSE_LOSE) &&
            (m_history.at(m_history.size() -2) == PLAYER_LOSE_WIN || m_history.at(m_history.size() -2) == PLAYER_LOSE_LOSE))
            return false;
        else
            return true;
    } else {
        return true;
    }
}
