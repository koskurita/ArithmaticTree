#include "gtest/gtest.h"
#include "op.hpp"
#include "base.hpp"

TEST(OpTest, OpEvaluateNonZero) {
   	Op* test = new Op(8);
	EXPECT_EQ(test->evaluate(), 8);
} 
