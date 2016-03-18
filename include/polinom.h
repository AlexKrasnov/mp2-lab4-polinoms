#pragma once
#include "list.h"
#include<locale>

using namespace std;

class Polinom 
{
public:
	List list;
	Polinom();
	~Polinom();
	Polinom& operator*(double a);
	Polinom& operator+(Polinom &p);
	Polinom& operator*(Polinom &p);
	Polinom& operator-(Polinom &p);
	Polinom& operator=(Polinom &p);
	friend istream& operator>>(istream &in, Polinom &p)
	{
		
	}
	friend ostream & operator<<( ostream &out, const Polinom &p)
	{

	}
};

