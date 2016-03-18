#include "monom.h"

Monom::Monom(double a,int x,int y,int z)
{
	SetIndex(x,y,z);
	coeff = a;
}

Monom::Monom( Monom &m2)
{
	coeff=m2.GetCoeff();
	index=m2.GetIndex();
}

Monom::~Monom(){};

void Monom::SetIndex(int x,int y,int z)
{
	if ((x>9)||(y>9)||(z>9)||(x<0)||(y<0)||(z<0))
		throw "Wrong power";
	else index=x*100+y*10+z;
}

Monom& Monom::operator=( Monom &m2)
{
	coeff=m2.GetCoeff();
	index=m2.GetIndex();
	return *this;
}