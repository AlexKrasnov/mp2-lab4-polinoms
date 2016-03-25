#pragma once
#include <iostream>

class Monom
{
public:
	double coeff;
	int index;
	Monom *next;
    Monom(double = 0.0,int N = 0, Monom *_next = NULL);
	Monom(Monom &m);
	void SetCoeff(double a);
    double GetCoeff();
	void SetIndex(int N);
    int GetIndex();
	void SetNext(Monom *_next);
	Monom* GetNext();
	Monom& operator=(const Monom &m);
	bool operator==(const Monom &m) const;
};
