#pragma once
#include"MeleePiece.h"
class Spearman: public MeleePiece
{
public:
	Spearman();
	virtual const int getInitiaLife();
	virtual const int  initialDamage();
	virtual const char representingChar();
	virtual const int  maxUseNum();
	virtual const RoundBonus  postRoundBonus();
	
};

