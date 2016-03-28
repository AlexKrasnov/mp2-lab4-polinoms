#include "polinom.h"
#include "monom.h"
#include <gtest.h>

TEST(Polinoms, can_create_polinom)
{
	ASSERT_NO_THROW(Polinom l);
}

TEST(Polinoms, created_list_is_empty)
{
	Polinom p;
	EXPECT_EQ(NULL, p.head);
}

TEST(Polinoms, can_create_copied_polinom)
{
	Polinom p1;
	ASSERT_NO_THROW(Polinom p2(p1));
}

TEST(Polinoms, copied_polinom_is_equal_to_source_one)
{
	Polinom p;
	for (int i(0);i<10;i++)
		p.AddMonom(i,i*100);
	Polinom q(p);
	EXPECT_EQ(p,q);
}

TEST(Polinoms, can_assign_polinom)
{
	Polinom p,q;
	p.AddMonom(5.0,125);
	q.AddMonom(7.7,343);
	ASSERT_NO_THROW(q=p);
	EXPECT_EQ(p,q);
}

TEST(Polinoms, can_assign_polinom_to_itself)
{
	Polinom p;
    p.AddMonom(5.0,125);
	ASSERT_NO_THROW(p = p);
}

TEST(Polinoms, compare_equal_polinoms_return_true)
{
	Polinom p,q;
	for (int i(0);i<3;i++)
	{
		p.AddMonom(i,i*100);
		q.AddMonom(i,i*100);
	}
	EXPECT_EQ(true,p==q);
}

TEST(Polinoms, compare_polinom_with_itself_return_true)
{
	Polinom p;
	p.AddMonom(5.0,125);
	EXPECT_EQ(true,p==p);
}

TEST(Polinoms, compare_different_polinoms)
{
	Polinom p,q;
	p.AddMonom(5.0,125);
	q.AddMonom(7.7,343);
	EXPECT_EQ(false,p==q);
}

TEST(Polinoms, input) 
{
	Polinom p,q;
	p.AddMonom(5,400);
	stringstream s;
	s << "5 1 0 0 0 0 0 0 0";
	s >> q;
	EXPECT_EQ(p, q);
}

TEST(Polinoms, output)
{
	Polinom p;
	p.AddMonom(5,400);
	stringstream s;
	s << p;
	string str;
	getline(s, str);
	EXPECT_EQ(string("5x^1y^0z^0\0"), str);
}

TEST(Polinoms, throws_when_enter_polinom_with_negative_power)
{
	Polinom p,q;
	p.AddMonom(5,100);
	stringstream s;
	s << "5 -1 0 0 ";
	ASSERT_ANY_THROW(s >> q);
}

TEST(Polinoms, throws_when_enter_polinom_with_too_large_power)
{
	Polinom p,q;
	p.AddMonom(5,100);
	stringstream s;
	s << "5 20 0 0 ";
	ASSERT_ANY_THROW(s >> q);
}

TEST(Polinoms, can_get_head)
{
	Polinom p1;
	Monom *m = new Monom;
	p1.head=m;
	EXPECT_EQ(m,p1.GetHead());
}

TEST(Polinoms, can_clean_polinom)
{
	Polinom p;
	p.AddMonom(1.0,333);
	p.AddMonom(1.0,999);
	p.AddMonom(1.0,125);
	p.Clean();
	EXPECT_EQ(true,p.head==NULL);
}

TEST(Polinoms, can_sort_polinom)
{
	Polinom p;
	p.AddMonom(1.0,333);
	p.AddMonom(1.0,999);
	p.AddMonom(1.0,125);
	Polinom q;
	q.AddMonom(1.0,125);
	q.AddMonom(1.0,333);
	q.AddMonom(1.0,999);
	p.Sort();
	EXPECT_EQ(p,q);
}

TEST(Polinoms, can_add_monoms_with_different_powers)
{
	Polinom *p = new Polinom;
	p->AddMonom(5.0,125);
	p->AddMonom(5.0,100);
	EXPECT_EQ(true,p->GetHead()->GetIndex()==125);
	EXPECT_EQ(true,p->GetHead()->GetNext()->GetIndex()==100);
	EXPECT_EQ(true,p->GetHead()->GetCoeff()==5.0);
	EXPECT_EQ(true,p->GetHead()->GetNext()->GetCoeff()==5.0);
}

TEST(Polinoms, can_add_monoms_with_equal_powers)
{
	Polinom p;
	p.AddMonom(5.0,125);
	p.AddMonom(5.0,125);
	EXPECT_EQ(true,p.GetHead()->GetIndex()==125);
	EXPECT_EQ(true,p.GetHead()->GetCoeff()==10.0);
}

TEST(Polinoms, not_add_monoms_with_coeff_0)
{
	Polinom p;
	p.AddMonom(0.0,125);
	EXPECT_EQ(true,p.head==NULL);
}

TEST(Polinoms, can_multiply_monom_on_const)
{
	Polinom p;
	p.AddMonom(5.0,125);
	p.AddMonom(2.0,545);
	Polinom res = p*5;
	Polinom q;
	q.AddMonom(5.0*5,125);
	q.AddMonom(2.0*5,545);
	EXPECT_EQ(res,q);
}

TEST(Polinoms, can_multiply_polinom_on_null)
{
	Polinom p;
	p.AddMonom(5.0,125);
	p.AddMonom(2.0,545);
	Polinom q=p*0;
	EXPECT_EQ(true,q.head->next==NULL);
	EXPECT_EQ(q.head->GetCoeff(),0);
}

TEST(Polinoms, can_add_polinoms_with_equal_index)
{
	Polinom p,q;
	p.AddMonom(5.0,125);
	q.AddMonom(1.0,125);	
	Polinom res;
	res.AddMonom(6.0,125);
	EXPECT_EQ(res,p+q);
}

TEST(Polinoms, can_add_polinoms_with_not_equal_index)
{
	Polinom p,q;
	p.AddMonom(5.0,666);
	q.AddMonom(1.0,444);
	Polinom res;
	res.AddMonom(5.0,666);
	res.AddMonom(1.0,444);
	EXPECT_EQ(res,p+q);
}

TEST(Polinoms, can_substract_polinoms_with_equal_index)
{	
	Polinom p,q;
	p.AddMonom(5.0,125);
	q.AddMonom(1.0,125);	
	Polinom res;
	res.AddMonom(4.0,125);
	EXPECT_EQ(res,p-q);
}

TEST(Polinoms, can_substract_polinoms_with_not_equal_index)
{
	Polinom p,q;
	p.AddMonom(5.0,666);
	q.AddMonom(1.0,444);
	Polinom res;
	res.AddMonom(5.0,666);
	res.AddMonom(-1.0,444);
	EXPECT_EQ(res,p-q);
}

TEST(Polinoms, can_multiply_polinoms)
{
	Polinom p,res;
	p.AddMonom(5,421);
	Polinom q(p);
	q.AddMonom(10,842);
	q=q*p;
	res.AddMonom(25,842);
	res.AddMonom(50,1263);
	EXPECT_EQ(q,res);
}

TEST(Polinoms, throws_when_multiply_polinoms_with_large_powers)
{
	Polinom p,q;
	p.AddMonom(3,666);
	q.AddMonom(7,7444);
	ASSERT_ANY_THROW(p*q);
}

TEST(Polinoms, can_add)
{
	Polinom *p = new Polinom;
	Polinom *q = new Polinom;
	p->AddMonom(5.0,666);
	q->AddMonom(1.0,444);
	Polinom *z = new Polinom;
	z->Add(p,q);
	Polinom *res = new Polinom;
	res->AddMonom(5.0,666);
	res->AddMonom(1.0,444);
	EXPECT_EQ(*res,*z);
}

TEST(Polinoms, can_subtruct)
{
	Polinom *p = new Polinom;
	Polinom *q = new Polinom;
	p->AddMonom(5.0,666);
	q->AddMonom(1.0,444);
	Polinom *z = new Polinom;
	z->Subtract(p,q);
	Polinom *res = new Polinom;
	res->AddMonom(5.0,666);
	res->AddMonom(-1.0,444);
	EXPECT_EQ(*res,*z);
}

TEST(Polinoms, can_multiply)
{
	Polinom *p = new Polinom;
	Polinom *res = new Polinom;
	p->AddMonom(5,421);
	Polinom *q=new Polinom;
	q->AddMonom(10,842);
	q->Multiply(q,p);
	res->AddMonom(50,1263);
	EXPECT_EQ(*q,*res);
}

TEST(Polinoms, my_test)
{
	Polinom p;
	p.AddMonom(-2,0);
	p.AddMonom(2,0);
	Polinom q;
	EXPECT_EQ(p,q);
}
