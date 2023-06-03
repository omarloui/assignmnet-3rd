#include "RangedPiece.h"

RangedPiece::RangedPiece(int life, int damage)
	:Pieces(life,damage)
{
	validColumns[0] = 1;
	validColumns[1] = 2;
}


