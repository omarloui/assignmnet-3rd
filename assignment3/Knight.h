#pragma once
#include"MeleePiece.h"


class Knight: public MeleePiece
{
public:
	Knight();
	virtual const int getInitiaLife();
	virtual const int  initialDamage();
	virtual const char representingChar();
	virtual const int  maxUseNum();
	virtual const RoundBonus  postRoundBonus();

};

