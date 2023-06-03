#include "Swordsman.h"

Swordsman::Swordsman()
    : MeleePiece(getInitiaLife(), initialDamage())
{

}

const int Swordsman::getInitiaLife()
{
    return 6;
}

const int Swordsman::initialDamage()
{
    return 4;
}

const char Swordsman::representingChar()
{
    return 'W';
}

const int Swordsman::maxUseNum()
{
    return -1;
}

const RoundBonus Swordsman::postRoundBonus()
{
    return RoundBonus::None;
}
