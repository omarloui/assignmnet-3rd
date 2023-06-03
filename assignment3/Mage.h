#pragma once
#include"RangedPiece.h"
class Mage: public RangedPiece
{
public:
	Mage();
	virtual const int getInitiaLife();
	virtual const int  initialDamage();
	virtual const char representingChar();
	virtual const int  maxUseNum();
	virtual const RoundBonus  postRoundBonus();

};

