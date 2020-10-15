#include "pch.h"
#include "../lab4/functions.c"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
TEST(UniqueCharsTests, ZeroStringInput) {
	char zero[1] = { 0 };
	int length = 0;
	char* d1 = uniqueChars(length, zero);
	char d2 = 0;
	ASSERT_EQ(*d1, d2);
}
TEST(charequalsTest, ZeroAInput) {
	char un[3] = { 'a','b','c' };
	ASSERT_EQ(charequal(0,3,un),-1);
}
TEST(charequalsTest, ZeroCharsAndZeroAInput) {
	char un[1] = { 0 };
	ASSERT_EQ(charequal(0, 1, un),0);
}