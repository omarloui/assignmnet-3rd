#include "Mage.h"

Mage::Mage()
    : RangedPiece(getInitiaLife(), initialDamage())

{

}

const int Mage::getInitiaLife()
{
    return 4;
}

const int Mage::initialDamage()
{
    return 8;
}

const char Mage::representingChar()
{
    return 'M';
}

const int Mage::maxUseNum()
{
    return 2;
}

const RoundBonus Mage::postRoundBonus()
{
    return RoundBonus::LifeUp1;
}
