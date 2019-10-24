#include "op.hpp"
#include "op_test.hpp"
#include "Add.hpp"

#include "gtest/gtest.h"



TEST(OpTest, numThree){
        Base *opNum = new Op(3);
        EXPECT_EQ(3, opNum->evaluate());
	delete opNum;
}


TEST(OpTest, NumNotThree){
	Base *opNum = new Op(3);
	EXPECT_EQ(4, opNum->evaluate());
	delete opNum;
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
