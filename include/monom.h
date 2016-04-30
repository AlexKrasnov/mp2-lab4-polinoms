///////////////////////////////////////////////////////////////////////
// monom.h                                                           //
// Арифметические операции с полиномами                              //
// Автор - Краснов А.А., Нижний Новгород, 2016                       //
///////////////////////////////////////////////////////////////////////

#pragma once
#include <iostream>

using namespace std;

class Monom
{
	double coeff;
    int index;
	Monom *next;
public:
    Monom(double = 0.0, int = 0, Monom* = NULL);
	Monom(const Monom &m);
	void SetCoeff(double a);
    double GetCoeff();
	void SetIndex(int N);
    int GetIndex();
	void SetNext(Monom *_next);
	Monom* GetNext();
	Monom& operator=(const Monom &m);
	bool operator==(const Monom &m) const;
	friend ostream& operator<<(ostream &out, const Monom &m)
	{
		Monom *n = new Monom(m);
		out<<abs(n->GetCoeff())<<"x^"<<n->GetIndex()/400<<"y^"<<(n->GetIndex()/20)%20<<"z^"<<n->GetIndex()%20;
		return out;
	}
};
