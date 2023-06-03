#include "Bowman.h"

Bowman::Bowman()
	: RangedPiece(getInitiaLife(), initialDamage())
{
}

const int Bowman::getInitiaLife()
{
	return 12;
}

const int Bowman::initialDamage()
{
	return 3;
}

const char Bowman::representingChar()
{
	return 'B';
}

const int Bowman::maxUseNum()
{
	return -1;
}

const RoundBonus Bowman::postRoundBonus()
{
	return RoundBonus::None;
}
