#include "pch.h"
#include "../SimilarityChecker-1/length.cpp"

class SimilarityCheckerFixture : public testing::Test {
public:
	SimilarityCheck game{ "ABCDE" };
};

TEST_F(SimilarityCheckerFixture, lengthcheck1) {
	EXPECT_EQ(60, game.getScore("AAAAA"));
}

TEST_F(SimilarityCheckerFixture, lengthcheck2) {
	EXPECT_EQ(0, game.getScore("AA"));
}

TEST_F(SimilarityCheckerFixture, lengthcheck3) {
	EXPECT_EQ(0, game.getScore("AAAAAAAAAA"));
}

TEST_F(SimilarityCheckerFixture, lengthcheck4) {
	EXPECT_EQ(20, game.getScore("ABC"));
}