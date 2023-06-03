#include "Knight.h"

Knight::Knight()
    : MeleePiece(getInitiaLife(), initialDamage())
{
}

const int Knight::getInitiaLife()
{
    return 10;
}

const int Knight::initialDamage()
{
    return 10;
}

const char Knight::representingChar()
{
    return 'K';
}

const int Knight::maxUseNum()
{
    return 1;
}

const RoundBonus Knight::postRoundBonus()
{
    return RoundBonus::AttackUp1;
}
