///////////////////////////////////////////////////////////////////////
// monom.h                                                           //
// Арифметические операции с полиномами                              //
// Автор - Краснов А.А., Нижний Новгород, 2016                       //
///////////////////////////////////////////////////////////////////////

#pragma once
#include <iostream>

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
};
