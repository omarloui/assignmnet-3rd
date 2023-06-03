#pragma once
#include"RangedPiece.h"
class Bowman:public RangedPiece
{	
public:
	Bowman();
	virtual const int getInitiaLife();
	virtual const int  initialDamage();
	virtual const char representingChar();
	virtual const int  maxUseNum();
	virtual const RoundBonus  postRoundBonus();
	
};

