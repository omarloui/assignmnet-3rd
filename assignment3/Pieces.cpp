#include "Pieces.h"

Pieces::Pieces(int life, int damage)
{
	this->life = life;
	this->damage = damage;
}

int Pieces::getLife()
{
	return life;
}

int Pieces::getDamage()
{
	return damage;
}

void Pieces::setLife(int life)
{
	this->life = life;
}

void Pieces::setDamage(int damage)
{
	this->damage = damage;
}

bool Pieces::columnsValid(int col)
{
	for (int i = 0; i < 2 ; i++)
	{
		if (validColumns[i] == col)
		{
			return true;
		}
	}
	return false;
}
