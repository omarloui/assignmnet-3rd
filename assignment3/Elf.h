#pragma once
#include"RangedPiece.h"
class Elf: public RangedPiece
{	
public:
	Elf();
	virtual const int getInitiaLife();
	virtual const int  initialDamage();
	virtual const char representingChar();
	virtual const int  maxUseNum();
	virtual const RoundBonus  postRoundBonus();
};

