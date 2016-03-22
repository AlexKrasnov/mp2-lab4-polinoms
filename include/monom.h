#pragma once
#include <iostream>

class Monom
{
public:
	double coeff;
	int index;
	Monom *next;
	Monom();
	Monom(Monom &l);
	Monom(double a,int N,Monom *_next);
	void SetCoeff(double a);
    double GetCoeff();
	void SetIndex(int N);
    int GetIndex();
	void SetNext(Monom *_next);
	Monom* GetNext();
	Monom& operator=(Monom &_l);
};