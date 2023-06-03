#include "Elf.h"

Elf::Elf()
    : RangedPiece(getInitiaLife(), initialDamage())
{

}

const int Elf::getInitiaLife()
{
    return 8;
}

const int Elf::initialDamage()
{
    return 6;
}

const char Elf::representingChar()
{
    return 'E';
}

const int Elf::maxUseNum()
{
    return 3;
}

const RoundBonus Elf::postRoundBonus()
{
    return RoundBonus::None;
}
