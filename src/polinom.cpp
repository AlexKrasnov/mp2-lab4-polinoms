#include "polinom.h"

using namespace std;

Polinom::Polinom()
{
	head=NULL;
}

Polinom:: Polinom(Polinom &p)
{
	head=new Monom;
	Monom *l1=p.head;
	Monom *l2=head;
	l2->SetCoeff(head->GetCoeff());
	l2->SetIndex(head->GetIndex());
	while (l1!=NULL)
	{
		Monom *l=new Monom;
		l2->SetCoeff(l1->GetCoeff());
		l2->SetIndex(l1->GetIndex());
		//l2->SetNext(l1->GetNext());
		(*l2).next=&*l1->next;
		l1=l1->GetNext();
		l2=l2->GetNext();
	}
}

Polinom::~Polinom()
{
	//Clean();
}

Monom* Polinom::GetHead()
{
	return head;
}

void Polinom::Clean()
{
	Monom *t=head;
	while(t!=NULL)
	{
		head=head->GetNext();
		delete t;
		t=head;
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

void Polinom::Input()
{
	double k;
	int s1,s2,s3;
	int f;
	while (1)
	{
		setlocale(LC_ALL, "Russian");
		cout << "Введите коэффициент: ";
		cin>>k;
		cout << "Введите степени x,y,z: "<<endl;
		cin>>s1;
		cin>>s2;
		cin>>s3;
		int N=s1*100+s2*10+s3;
		AddMonom(k,N);
		cout << endl << "Продолжить ввод мономов? 1-да, 0-нет"<<endl;
		cin>>f;
		cout<<endl;
		if (f==0) break;
		else if (f==1) continue;
	}
}

void Polinom::Print()
{
	Sort();
	Monom *t = head;
	while (t->GetNext()!=NULL)
	{
		if (t->GetCoeff()==0.0) t=t->GetNext();
		else if (t->GetIndex()==0) 
		{
			cout<<t->GetCoeff()<<" + ";
			t=t->GetNext();
		}
		else
		{
			cout<<t->GetCoeff()<<"x^"<<t->GetIndex()/100<<"y^"<<(t->GetIndex()/10)%10<<"z^"<<t->GetIndex()%10<<" + ";
			t=t->GetNext();
		}
	}
	cout<<t->GetCoeff()<<"x^"<<t->GetIndex()/100<<"y^"<<(t->GetIndex()/10)%10<<"z^"<<t->GetIndex()%10<<endl;
}

void Polinom::AddFirst(double a, int N)
{
	Monom *t=new Monom;
	t->SetCoeff(a);
	t->SetIndex(N);
	t->SetNext(head);
	head=t;
}

void Polinom::AddLast(double a, int N)
{
	Monom *t=new Monom;
	t->SetIndex(N);
	t->SetCoeff(a);
	if (head==NULL) head=t;
	else
	{
		Monom *current=head;
		while (current->GetNext()!=NULL) current=current->GetNext();
		current->SetNext(t);
	}	
}

void Polinom::AddMonom(double a, int N)
{
	bool flag = false;
	Monom *t=head;
	while (t!=NULL)
	{
		if (a==0) break;
		if (t->GetIndex()==N)
		{
			flag = true;
			break;
		}
		t=t->GetNext();
	}
	if (flag==true) t->SetCoeff(a+t->GetIndex());
	else AddFirst(a,N);
}

Polinom Polinom:: operator*(double a)
{
	Polinom res=*this;
	Monom *t = res.head;
	while (t!=NULL)
	{
		t->coeff*=a;
		t=t->GetNext();
	}
	return res;
}

Polinom Polinom:: operator+(Polinom &p)
{
	Polinom res=(*this);
	Monom *t=p.head;
	while (t!=NULL)
	{
		res.AddMonom(t->GetCoeff(),t->GetIndex());
		t=t->GetNext();
	}
	return res;
}

Polinom Polinom:: operator-(Polinom &p)
{
	Polinom q=*this;
	Polinom res = q + p*(-1);
	return res;
}

Polinom Polinom::operator*(Polinom &p)
{
	Polinom res;
	Monom *t1 = new Monom;
	t1=p.head;
	Monom *t2(head);
	while (t1!= NULL)
	{
		for (Monom *t2=head;t2!=NULL;t2=t2->GetNext())
		{
			int s1(0),s2(0),s3(0);
			s1=(t1->GetIndex())%10 + (t2->GetIndex())%10;
			s2=((t1->GetIndex())/10)%10 + ((t2->GetIndex())/10)%10;
			s3=(t1->GetIndex())/100 + (t2->GetIndex())/100;
			if (s1>9||s2>9||s3>9)
		       throw ("Одна из степеней итогового полинома > 9");
			else res.AddMonom(t1->GetCoeff() * t2->GetCoeff(), t1->GetIndex() + t2->GetIndex());
		}
		t1 = t1->GetNext();
	}
	return res;
}

Polinom& Polinom:: operator=(Polinom &p)
{
	if (this->head==p.head) return *this;
	else
	{
		this->Clean();
		head=new Monom;
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
			l1=l1->GetNext();
			l2=l2->GetNext();
		}
	}
	return *this;
}