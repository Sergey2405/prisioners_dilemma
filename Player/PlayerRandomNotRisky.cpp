#include "PlayerRandomNotRisky.h"

PlayerRandomNotRisky::PlayerRandomNotRisky()
{

}

//QString PlayerRandomNotRisky::type()
//{
//    return "Risky";
//}

bool PlayerRandomNotRisky::comply()
{
    if(m_balance + PLAYER_LOSE_WIN - PLAYER_PAY_GAME < 0)
        return false;
    else
        return QRandomGenerator::global()->generate() % 2 == 0;
}
