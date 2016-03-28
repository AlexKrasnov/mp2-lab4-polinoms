#include "monom.h"
#include <gtest.h>

TEST(Monoms, can_create_Monom_with_correct_power)
{
	ASSERT_NO_THROW(Monom m(5.0,125,NULL));
}

TEST(Monoms, can_create_Monom_with_power_less_that_0)
{
	ASSERT_ANY_THROW(Monom m(5.0,-1,NULL));
}

TEST(Monoms, can_create_Monom_with_power_more_that_9)
{
	ASSERT_ANY_THROW(Monom m(5.0,8000,NULL));
}

TEST(Monoms, can_create_copied_monom)
{
	Monom m1(5.0,100,NULL);
	ASSERT_NO_THROW(Monom m2(m1));
}

TEST(Monoms, can_copied_monom_right)
{
	Monom m1(5.0,125,NULL);
	Monom m2(m1);
	EXPECT_EQ(m1.GetCoeff(),m2.GetCoeff());
	EXPECT_EQ(m1.GetIndex(),m2.GetIndex());
}

TEST(Monoms, copied_monom_is_equal_to_source_one) 
{
	Monom m1;
	Monom m2(m1);
	EXPECT_EQ(m1, m2);
}

TEST(Monoms, can_get_coeff)
{
	Monom a(5.0,100,NULL);
	EXPECT_EQ(5.0,a.GetCoeff());
}

TEST(Monoms, can_get_index)
{
	Monom a(5.0,100,NULL);
	EXPECT_EQ(100,a.GetIndex());
}

TEST(Monoms, can_set_coeff)
{
	Monom a(5.0,100,NULL);
	a.SetCoeff(10.1);
	EXPECT_EQ(10.1,a.GetCoeff());
}

TEST(Monoms, can_set_index)
{
	Monom a(5.0,100,NULL);
	a.SetIndex(999);
	EXPECT_EQ(999,a.GetIndex());
}

TEST(Monoms, throws_when_set_element_with_negative_index)
{
	Monom a;
	ASSERT_ANY_THROW(a.SetIndex(-1));
}

TEST(Monoms, throws_when_set_element_with_too_large_index)
{
	Monom a;
	ASSERT_ANY_THROW(a.SetIndex(8000));
}

TEST(Monoms, can_get_next)
{
	Monom *p = new Monom;
	Monom m(5.0,100,p);
	EXPECT_EQ(p,m.GetNext());
}

TEST(Monoms, can_set_next)
{
	Monom m(5.0,100,NULL);
	Monom *p = new Monom;
	m.SetNext(p);
	EXPECT_EQ(p,m.GetNext());
}

TEST(Monoms, can_assign_monom)
{
	Monom *p = new Monom;
	Monom a(5.0,100,p);
	Monom b(33.3,999,NULL);
	b=a;
	Monom c(b);
	EXPECT_EQ(5.0,b.GetCoeff());
	EXPECT_EQ(100, b.GetIndex());
	EXPECT_EQ(c.GetCoeff(),a.GetCoeff());
	EXPECT_EQ(c.GetIndex(),a.GetIndex());
}

TEST(Monoms, can_assign_monom_to_itself)
{
	Monom m(5.0,100,NULL);
	ASSERT_NO_THROW(m = m);
}

TEST(Monoms, compare_monom_with_itself_return_true)
{
	Monom m(5.0,100,NULL);
	EXPECT_EQ(true,m==m);
}

TEST(Monoms, compare_equal_monoms_return_true)
{
	Monom m1(5.0,100,NULL);
	Monom m2(5.0,100,NULL);
	EXPECT_EQ(true, m1==m2);
}

TEST(Monoms, compare_monoms_with_different_pointers)
{
	Monom *l=new Monom(3.0,120,NULL);
	Monom m1(5.0,100,NULL);
	Monom m2(5.0,100,l);
	EXPECT_EQ(true,m1==m2);
}

TEST(Monoms, compare_different_monoms)
{
	Monom m1(3.0,100,NULL);
	Monom m2(5.0,100,NULL);
	Monom m3(5.0,200,NULL);
	EXPECT_EQ(false,m1==m2);
	EXPECT_EQ(false,m2==m3);
}