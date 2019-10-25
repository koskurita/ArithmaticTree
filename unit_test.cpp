#include "op.hpp"
//#include "op_test.hpp"
#include "Add.hpp"
#include "Div.hpp"

#include "gtest/gtest.h"


TEST(OpTest, numThree){
        Base *opNum = new Op(3);
        EXPECT_EQ(3, opNum->evaluate());
	delete opNum;
}


// Fail: 3 != 4
TEST(OpTest, NumNotThree){
	Base *opNum = new Op(3);
	EXPECT_EQ(4, opNum->evaluate());
	delete opNum;
}


// Test to see if we get the string type of our double
TEST(OpTest, StringThree){
	Base *opNum = new Op(3);
	std::cout << "string: " << opNum->stringify();
	EXPECT_EQ("3", opNum->stringify());
	delete opNum;
}


// Add two operands together
TEST(AddTest, AddOperands){
	Base *opNum1 = new Op(4);
	Base *opNum2 = new Op(5);
	Add *tester = new Add(opNum1, opNum2);

	EXPECT_EQ(9, tester->evaluate());
	EXPECT_EQ(3, tester->evaluate());
	delete opNum1, opNum2;
}


// Add two zeros together
TEST(AddTest, AddZeros){
	Base *opNum1 = new Op(0);
	Base *opNum2 = new Op(0);
	Add *tester = new Add(opNum1, opNum2);
	
	EXPECT_EQ(0, tester->evaluate());
	EXPECT_EQ(1, tester->evaluate());
 
	delete opNum1, opNum2;
}


// Add using negatives
TEST(AddTest, AddWithNegative){
        Base *opNum1 = new Op(1);
        Base *opNum2 = new Op(-4);
        Add *tester = new Add(opNum1, opNum2);

        EXPECT_EQ(-3, tester->evaluate());
	EXPECT_EQ(5, tester->evaluate());

        delete opNum1, opNum2;	
}


// Divide num1 by num2 
TEST(DivTest, DivideNums){
	Base *opNum1 = new Op(4);
        Base *opNum2 = new Op(2);
        Div *tester = new Div(opNum1, opNum2);

        EXPECT_EQ(2, tester->evaluate());
	EXPECT_EQ(1, tester->evaluate());
 
       delete opNum1, opNum2;
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
