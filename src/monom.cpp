///////////////////////////////////////////////////////////////////////
// monom.cpp                                                         //
// Арифметические операции с полиномами                              //
// Автор - Краснов А.А., Нижний Новгород, 2016                       //
///////////////////////////////////////////////////////////////////////

#include "monom.h"

Monom::Monom(double a,int N,Monom *_next)
{
	SetIndex(N);
	SetCoeff(a);
	SetNext(_next);
}

Monom::Monom(const Monom &m)
{
	SetIndex(m.index);
	SetCoeff(m.coeff);
	SetNext(m.next);
}

void Monom::SetCoeff(double a)
{
	coeff=a;
}

double Monom::GetCoeff()
{
	return coeff;
}

void Monom::SetIndex(int N)
{
	if ((N>=0) && (N<8000)) index=N;
	else if (N<0) throw "Степень < 0 ";
	else if (N>=8000) throw "Степень >= 20 ";
}

int Monom::GetIndex()
{
	return index;
}
void Monom::SetNext(Monom *_next)
{
	next=_next;
}

Monom* Monom::GetNext()
{
	return next;
}

Monom& Monom::operator=(const Monom &m)
{
	SetCoeff(m.coeff);
	SetIndex(m.index);
	return *this;
}


bool Monom::operator==(const Monom &m) const 
{
	if ((coeff==m.coeff)&&(index==m.index)) return true;
	else return false;
}
