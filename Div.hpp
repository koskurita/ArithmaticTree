#ifndef Header_hpp
#define Header_hpp

#include "base.hpp"

class Div : public Base {
private:
	double num1, num2;
public:
	Add(Base *val1, Base *val2): Base(){
		num1 = val1->evaluate();
		num2 = val2->evaluate();
	}
	// divide and return num1/num2
	virtual double evaluate(){ return num1/num2;}
	// Convert a string of our operator and operands
	// Ex: "4 / 2"
	virtual std::string stringify(){
		std::string newString;
		newString = std::to_string(num1) + " / " + std::to_string(num2);
		return newString;	
	}
};



#endif /* Header_hpp */
