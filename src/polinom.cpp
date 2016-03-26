#include "polinom.h"

using namespace std;

Polinom::Polinom()
{
	head=NULL;
}

Polinom::~Polinom()
{
	//Clean();
}

Polinom:: Polinom(const Polinom &p)
{
	/*
	head=new Monom;
	if (p.head==NULL) 
	{
		head=NULL;
		return;
	}
	Monom *l1=p.head;
	Monom *l2=head;
	l2->SetCoeff(head->GetCoeff());
	l2->SetIndex(head->GetIndex());
	while (l1!=NULL)
	{
		Monom *l=new Monom;
		l2->SetCoeff(l1->GetCoeff());
		l2->SetIndex(l1->GetIndex());
		l2->SetNext(l1->GetNext());
		//(*l2).next=&*l1->next;
		l1=l1->GetNext();
		l2=l2->GetNext();
	}
	*/

	head = new Monom; 
	head->SetNext(NULL);
	Monom *cur = new Monom;
	cur = p.head;
	while (cur!=NULL)
	{
		AddMonom(cur->GetCoeff(),cur->GetIndex());
		cur = cur->GetNext();
	}
}

Monom* Polinom::GetHead()
{
	return head;
}

void Polinom::Clean()
{
	Monom *t=new Monom;
	while(head!=NULL)
	{
		t=head->GetNext();
		delete head;
		head=t;
	}
}

void Polinom:: Sort()
{
	for (Monom *i=head;i!=NULL;i=i->GetNext())
		for (Monom *j=i;j!=NULL;j=j->GetNext())
			if (j->GetIndex()>=i->GetIndex()) 
			{
				swap(i->index,j->index);
				swap(i->coeff,j->coeff);
			}
}

void Polinom::AddMonom(double a, int N)
{
	bool flag = false;
	if (a==0) return;
	Monom *t=head;
	while (t!=NULL)
	{
		if (t->GetIndex()==N)
		{
			flag = true;
			break;
		}
		t=t->GetNext();
	}
	if (flag==true) t->SetCoeff(a+t->GetCoeff());
	else 
	{
		Monom *p=new Monom(a,N,head);
		head=p;
	}
	Sort();
}

Polinom& Polinom:: operator*(double a) const
{
	Polinom *res = new Polinom;
	Polinom q(*this);
	Monom *t=q.GetHead();
	if (a==0.0) return *res;
	while (t!=NULL)
	{
		(*res).AddMonom(a*(t->GetCoeff()),t->GetIndex());
		t=t->GetNext();
	}
	return *res;
}

Polinom& Polinom:: operator+(const Polinom &p) const
{
	Polinom *res = new Polinom(*this);
	Monom *t=p.head;
	while (t!=NULL)
	{
		(*res).AddMonom(t->GetCoeff(),t->GetIndex());
		t=t->GetNext();
	}
	return *res;
}

Polinom& Polinom:: operator-(const Polinom &p) const
{
	Polinom *res = new Polinom(*this);
	Monom *t=p.head;
	while (t!=NULL)
	{
		(*res).AddMonom(-t->GetCoeff(),t->GetIndex());
		t=t->GetNext();
	}
	return *res;
}

Polinom& Polinom::operator*(const Polinom &p) const
{
	Polinom *res = new Polinom;
	Polinom q(*this);
	for (Monom *t1=p.head;t1!=NULL;t1=t1->GetNext())
		for (Monom *t2=q.GetHead();t2!=NULL;t2=t2->GetNext())
		{
			int s1(0),s2(0),s3(0);
			s1=(t1->GetIndex())%10 + (t2->GetIndex())%10;
			s2=((t1->GetIndex())/10)%10 + ((t2->GetIndex())/10)%10;
			s3=(t1->GetIndex())/100 + (t2->GetIndex())/100;
			if (s1>9||s2>9||s3>9)
				throw ("Одна из степеней итогового полинома > 9");
			else (*res).AddMonom(t1->GetCoeff() * t2->GetCoeff(), t1->GetIndex() + t2->GetIndex());
		}
		return *res;
}

Polinom& Polinom:: operator=(const Polinom &p)
{
	this->Clean();
	head=p.head;
	Monom *l1=p.head;
	Monom *l2=(*this).GetHead();
	l2=l1;
	while (l1!=NULL)
	{
		l2=l1;
		l1=l1->GetNext();
		l2=l2->GetNext();
	}
	return *this;
}

bool Polinom:: operator==(const Polinom &p) const
{
	Polinom *q = new Polinom(p);
	if (head==NULL)
	{
		if (q->head==NULL) return true;
		else return false;
	}
	Monom *t1=head;
	Monom *t2=q->head;
	int flag(1);
	while (t1!=NULL)
	{
		if ((t1->GetCoeff()!=t2->GetCoeff())||(t1->GetIndex()!=t2->GetIndex()))
		{
			flag=0;
			break;
		}
		t1=t1->GetNext();
		t2=t2->GetNext();
	}
	if (flag==1) return true;
	else return false;
}