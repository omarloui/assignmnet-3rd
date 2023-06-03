#pragma once
#include"MeleePiece.h"

class Swordsman : public MeleePiece
{
public:
	Swordsman();

	virtual const int getInitiaLife();
	virtual const int  initialDamage();
	virtual const char representingChar();
	virtual const int  maxUseNum();
	virtual const RoundBonus  postRoundBonus();
};

