#include "Ranger.h"

Ranger::Ranger()
    : MeleePiece(getInitiaLife(), initialDamage())
{
}

const int Ranger::getInitiaLife()
{
    return 8;
}

const int Ranger::initialDamage()
{
    return 6;
}

const char Ranger::representingChar()
{
    return 'R';
}

const int Ranger::maxUseNum()
{
    return 2;
}

const RoundBonus Ranger::postRoundBonus()
{
    return RoundBonus::None;
}
