#include "monom.h"

Monom::Monom()
{
	coeff = 1.0;
	index = 0;
	next=NULL;
}

Monom::Monom(double a,int N,Monom *_next)
{
	SetIndex(N);
	coeff=a;
	next=_next;
}

Monom::Monom(Monom &l)
{
	coeff=l.coeff;
	index=l.index;
	next=l.next;
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
	if ((N>=0) && (N<1000))
	index=N;
	else if (N<0) throw "������� < 0 ";
	else if (N>=1000) throw "������� > 9 ";
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

Monom& Monom::operator=(Monom &_l)
{
	coeff=_l.coeff;
	index=_l.index;
	next=_l.next;
	return *this;
}