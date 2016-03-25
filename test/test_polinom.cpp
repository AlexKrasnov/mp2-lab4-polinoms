#include "polinom.h"
#include "monom.h"
#include <gtest.h>

TEST(Polinom, can_create_polinom)
{
	ASSERT_NO_THROW(Polinom l);
}

TEST(Polinom, created_list_is_empty)
{
	Polinom p;
	EXPECT_EQ(NULL, p.head);
}

TEST(Polinom, can_create_copied_polinom)
{
	Polinom p1;
	ASSERT_NO_THROW(Polinom p2(p1));
}

TEST(Polinom, can_get_head)
{
	Polinom p1;
	Monom *m = new Monom;
	p1.head=m;
	EXPECT_EQ(m,p1.GetHead());
}

TEST(Polinom, can_clean_polinom)
{
	Polinom p;
	p.AddMonom(1.0,333);
	p.AddMonom(1.0,999);
	p.AddMonom(1.0,125);
	p.Clean();
	EXPECT_EQ(true,p.head==NULL);
}

TEST(Polinom, can_sort_polinom)
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

TEST(Polinom, can_add_monoms_with_different_powers)
{
	Polinom p;
	p.AddMonom(5.0,125);
	p.AddMonom(5.0,100);
	EXPECT_EQ(true,p.GetHead()->GetIndex()==100);
	EXPECT_EQ(true,p.GetHead()->GetNext()->GetIndex()==125);
	EXPECT_EQ(true,p.GetHead()->GetCoeff()==5.0);
	EXPECT_EQ(true,p.GetHead()->GetNext()->GetCoeff()==5.0);
}

TEST(Polinom, can_add_monoms_with_equal_powers)
{
	Polinom p;
	p.AddMonom(5.0,125);
	p.AddMonom(5.0,125);
	EXPECT_EQ(true,p.GetHead()->GetIndex()==125);
	EXPECT_EQ(true,p.GetHead()->GetCoeff()==10.0);
}

TEST(Polinom, not_add_monoms_with_coeff_0)
{
	Polinom p;
	p.AddMonom(0.0,125);
	EXPECT_EQ(true,p.head==NULL);
}

