#include "pch.h"
#include "../lab4/functions.c"

TEST(UniqueCharsTests, ZeroStringInput) {
	char ar[1000] = {0};
	char zero[1000] = { 0 };
	int length = 1000;
	int d1 = uniqueChars(length, zero,ar);
	int d2 = 1;
	ASSERT_EQ(d1, d2);
}
TEST(charequalsTest, ZeroAInput) {
	char un[3] = { 'a','b','c' };
	ASSERT_EQ(charequal(0,3,un),-1);
}
TEST(charequalsTest, ZeroCharsAndZeroAInput) {
	char un[1] = { 0 };
	ASSERT_EQ(charequal(0, 1, un),0);
}
TEST(FindsizeTests, ZeroStringInput) {
	char zero[1] = { '\n' };
	int d1 = findsize(zero);
	ASSERT_EQ(d1, 0);
}