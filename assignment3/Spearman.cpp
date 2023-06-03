#include "spearman.h"

Spearman::Spearman()
    : MeleePiece(getInitiaLife(), initialDamage())

{
}

const int Spearman::getInitiaLife()
{
    return 6;
}

const int Spearman::initialDamage()
{
    return 3;
}

const char Spearman::representingChar()
{
    return 'S';
}

const int Spearman::maxUseNum()
{
    return -1;
}

const RoundBonus Spearman::postRoundBonus()
{
    return RoundBonus::None;
}


