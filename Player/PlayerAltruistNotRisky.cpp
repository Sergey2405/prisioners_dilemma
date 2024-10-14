#include "PlayerAltruistNotRisky.h"

PlayerAltruistNotRisky::PlayerAltruistNotRisky()
{}

bool PlayerAltruistNotRisky::comply()
{
    if(m_balance + PLAYER_LOSE_WIN - PLAYER_PAY_GAME < 0)
        return false;
    else
        return true;
}
