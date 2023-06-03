#pragma once
#include"RoundBonus.h"
using namespace std;
class Pieces
{	
protected:

	int life;
	int damage;
	int validColumns[2];

public:

	virtual const int  getInitiaLife()=0;
	virtual const int  initialDamage()=0;
	virtual const char representingChar()=0;
	virtual const int  maxUseNum()=0;
	virtual const RoundBonus  postRoundBonus()=0;
	
	Pieces(int, int);
	int getLife();
	int getDamage();
	void setLife(int);
	void setDamage(int);
	bool columnsValid(int);

};

