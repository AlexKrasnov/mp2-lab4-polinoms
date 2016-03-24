#include "monom.h"
#include <gtest.h>

TEST(Monom, can_create_Monom_with_correct_power)
{
	ASSERT_NO_THROW(Monom m(5.0,125,NULL));
}

TEST(Monom, can_create_Monom_with_power_less_that_0)
{
	ASSERT_ANY_THROW(Monom m(5.0,-1,NULL));
}

TEST(Monom, can_create_Monom_with_power_more_that_9)
{
	ASSERT_ANY_THROW(Monom m(5.0,1000,NULL));
}

TEST(Monom, can_create_copied_monom)
{
	Monom m1(5.0,100,NULL);
	ASSERT_NO_THROW(Monom m2(m1));
}

TEST(Monom, can_copied_monom_right)
{
	Monom m1(5.0,125,NULL);
	Monom m2(m1);
	EXPECT_EQ(5.0,m2.GetCoeff());
	EXPECT_EQ(125,m2.GetIndex());
}

TEST(Monom, copied_monom_has_its_own_memory)
{
	Monom m1(5.0,100,NULL);
	Monom m2(m1);
	EXPECT_NE(&m1.next,&m2.next);
}

TEST(Monom, can_get_coeff)
{
	Monom a(5.0,100,NULL);
	EXPECT_EQ(5.0,a.GetCoeff());
}

TEST(Monom, can_get_index)
{
	Monom a(5.0,100,NULL);
	EXPECT_EQ(100,a.GetIndex());
}

TEST(Monom, can_set_coeff)
{
	Monom a(5.0,100,NULL);
	a.SetCoeff(10.1);
	EXPECT_EQ(10.1,a.GetCoeff());
}

TEST(Monom, can_set_index)
{
	Monom a(5.0,100,NULL);
	a.SetIndex(999);
	EXPECT_EQ(999,a.GetIndex());
}

TEST(Monom, can_get_next)
{
	Monom *p = new Monom;
	Monom m(5.0,100,p);
	EXPECT_EQ(p,m.GetNext());
}

TEST(Monom, can_set_next)
{
	Monom m(5.0,100,NULL);
	Monom *p = new Monom;
	m.SetNext(p);
	EXPECT_EQ(p,m.GetNext());
}


TEST(Monom, can_assign_monom)
{
	Monom *p = new Monom;
	Monom a(5.0,100,p);
	Monom b(33.3,999,NULL);
	b=a;
	Monom c(b);
	EXPECT_EQ(5.0,b.GetCoeff());
	EXPECT_EQ(100, b.GetIndex());
	EXPECT_EQ(p, b.GetNext());
	EXPECT_EQ(c.GetCoeff(),a.GetCoeff());
	EXPECT_EQ(c.GetIndex(),a.GetIndex());
	EXPECT_EQ(c.GetNext(),a.GetNext());
}

