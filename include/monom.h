#pragma once

class Monom 
{
protected:
	double coeff;       // коэффициэнт перед мономом
	int index;          // свёртка
public:
	Monom(double a=0,int x=0,int y=0,int z=0);
	Monom( Monom &m2);
	~Monom();
	double GetCoeff(){return coeff;};
	void SetCoeff(double a){coeff=a;};
	int GetIndex(){return index;};
	void SetIndex(int x,int y,int z);
	Monom& operator=(Monom &m2); 
}; 