#pragma once
#include "monom.h"
#include<locale>

using namespace std;

class Polinom : public Monom
{
public:
	Monom *head;
	Polinom();
	Polinom(Polinom &p);
	~Polinom();
	void Clean();
	void Sort();
	void AddMonom(double a, int N); 
	Polinom operator*(double a);
	Polinom operator+(Polinom &p);
	Polinom operator-(Polinom &p);
	Polinom operator*(Polinom &p);
	Polinom& operator=(Polinom &p);
	Monom* GetHead();
	friend istream& operator>>(istream &in, Polinom &p)
	{
		double k;
		int s1,s2,s3;
		int f;
		while (1)
		{
			setlocale(LC_ALL, "Russian");
			cout << "������� �����������: ";
			in>>k;
			cout << "������� ������� x,y,z: "<<endl;
			in>>s1;
			in>>s2;
			in>>s3;
			int N=s1*100+s2*10+s3;
			p.AddMonom(k,N);
			cout << endl << "���������� ���� �������? 1-��, 0-���"<<endl;
			in>>f;
			cout<<endl;
			if (f==0) break;
			else if (f==1) continue;
		}
		return in;
	}
	friend ostream & operator<<(ostream &out, const Polinom &p)
	{
		Monom *t = p.head;
		while (t->GetNext()!=NULL)
		{
			if (t->GetCoeff()==0.0) t=t->GetNext();
			else if (t->GetIndex()==0) 
			{
				out<<t->GetCoeff()<<" + ";
				t=t->GetNext();
			}
			else
			{
				out<<t->GetCoeff()<<"x^"<<t->GetIndex()/100<<"y^"<<(t->GetIndex()/10)%10<<"z^"<<t->GetIndex()%10<<" + ";
				t=t->GetNext();
			}
		}
		if (t->GetIndex()==0) out<<t->GetCoeff();
		else out<<t->GetCoeff()<<"x^"<<t->GetIndex()/100<<"y^"<<(t->GetIndex()/10)%10<<"z^"<<t->GetIndex()%10<<endl;
		return out;
	}
};