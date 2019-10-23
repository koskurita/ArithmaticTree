#include "op.hpp"
#include "gtest/gtest.h"

//TEST (OpTest, OpValue) {
       	//Base *three = new Op(3);
	//double numRetrieved = three->evaluate();
        //EXPECT_EQ(3, 3);

//}
//
TEST(One, Two){
	Base *three = new Op(3);
	double numDouble = 3;
	EXPECT_EQ(numDouble, three->evaluate());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
