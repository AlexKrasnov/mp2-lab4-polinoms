///////////////////////////////////////////////////////////////////////
// polinom.h                                                         //
// Арифметические операции с полиномами                              //
// Автор - Краснов А.А., Нижний Новгород, 2016                       //
///////////////////////////////////////////////////////////////////////

#pragma once
#include "monom.h"
#include <locale>

using namespace std;

class Polinom : public Monom
{
public:
	Monom *head;
	Polinom();
	~Polinom();
	Polinom(const Polinom &p);
	void Clean();
	void Sort();
	void AddMonom(double a, int N); 
	Polinom& operator*(double a) const;
	Polinom& operator+(const Polinom &p) const;
	Polinom& operator-(const Polinom &p) const;
	Polinom& operator*(const Polinom &p) const;
	Polinom& operator=(const Polinom &p);
	bool operator==(const Polinom &p) const;
	Monom* GetHead();
	friend istream& operator>>(istream &in, Polinom &p)
	{
		double k;
		int s1,s2,s3;
		int f;
		while (1)
		{
			setlocale(LC_ALL, "Russian");
			cout << "Введите коэффициент: ";
			in>>k;
			cout << "Введите степени x,y,z: "<<endl;
			in>>s1;
			in>>s2;
			in>>s3;
			if (s1<0||s2<0||s3<0) throw "Степень < 0 ";
			if (s1>20||s2>20||s3>20) throw "Степень >= 20 ";
			int N=s1*400+s2*20+s3;
			p.AddMonom(k,N);
			cout << endl << "Продолжить ввод мономов? 1-да, 0-нет"<<endl;
			in>>f;
			cout<<endl;
			if (f==0) break;
			else if (f==1) continue;
		}
		return in;
	}
	friend ostream& operator<<(ostream &out, const Polinom &p)
	{
		Polinom q(p);
		q.Sort();
		Monom *t = q.head;
		if (t==NULL)
		{
			out<<t->GetCoeff();
			return out;
		}
		if (t->GetNext()==NULL)
		{
			if (t->GetCoeff()==0)
			{
				out<<t->GetCoeff();
				return out;
			}
			else if (t->GetIndex()==0) out<<t->GetCoeff();
			else out<<t->GetCoeff()<<"x^"<<t->GetIndex()/400<<"y^"<<(t->GetIndex()/20)%20<<"z^"<<t->GetIndex()%20<<endl;
			return out;
		}
		while (t->GetNext()!=NULL)
		{
			if (t->GetCoeff()==0.0) t=t->GetNext();
			else if (t->GetIndex()==0) 
			{
				out<<t->GetCoeff();
				t=t->GetNext();
			}
			else
			{
				out<<t->GetCoeff()<<"x^"<<t->GetIndex()/400<<"y^"<<(t->GetIndex()/20)%20<<"z^"<<t->GetIndex()%20;
				t=t->GetNext();
			}
			if (t->GetNext()!=NULL) out<<" + ";
		}
		if (t->GetCoeff()==0) return out;
		else if (t->GetIndex()==0) out<<" + "<<t->GetCoeff();
		else out<<" + "<<t->GetCoeff()<<"x^"<<t->GetIndex()/400<<"y^"<<(t->GetIndex()/20)%20<<"z^"<<t->GetIndex()%20<<endl;
		return out;
	}
};