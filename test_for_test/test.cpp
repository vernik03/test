#include "pch.h"
#include "../test/test_exam.h"

tCheck t;

TEST(SimpleTestForTAndTnotE, test) {
	
	t.t = 2;
	t.t_without_e = 1;
	EXPECT_EQ(countAllT("test"), t);
}

TEST(SimpleTestForTAndTnotE, testet) {
	t.t = 3;
	t.t_without_e = 1;
	EXPECT_EQ(countAllT("testet"), t);
}

TEST(SimpleTestForTAndTnotE, ttt) {
	t.t = 3;
	t.t_without_e = 3;
	EXPECT_EQ(countAllT("ttt"), t);
}

TEST(SimpleTestForTAndTnotE, eee) {
	t.t = 0;
	t.t_without_e = 0;
	EXPECT_EQ(countAllT("eee"), t);
}

TEST(SimpleTestForTAndTnotE, teeet) {
	t.t = 2;
	t.t_without_e = 1;
	EXPECT_EQ(countAllT("teeet"), t);
}