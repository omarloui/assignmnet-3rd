#include "MeleePiece.h"

MeleePiece::MeleePiece(int life, int damage)
	: Pieces(life, damage)
{
	validColumns[0] = 2;
	validColumns[1] = 3;
}
