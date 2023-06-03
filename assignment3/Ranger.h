#pragma once
#include"MeleePiece.h"

class Ranger: public MeleePiece
{
public:
	Ranger();
	virtual const int getInitiaLife();
	virtual const int  initialDamage();
	virtual const char representingChar();
	virtual const int  maxUseNum();
	virtual const RoundBonus  postRoundBonus();


};

