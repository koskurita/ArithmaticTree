#include "op.hpp"
#include "base.hpp"
#include "Sub.hpp"
#include "gtest/gtest.h"

TEST(SubTest, SubFourMinTwo){
	Op* four = new Op(4);
	Op* two = new Op(2);
	Sub* test = new Sub(four, two);
	EXPECT_EQ(test->evaluate(), 2);
	delete four;
	delete two;
	delete test;
}
