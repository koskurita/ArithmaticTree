#ifndef Header_hpp
#define Header_hpp

#include "base.hpp"

class Div : public Base {
private:
	double num1, num2;
	std::string str1, str2;
public:
	Div(Base *val1, Base *val2): Base(){
		num1 = val1->evaluate();
		num2 = val2->evaluate();
		str1 = val1->stringify();
                str2 = val2->stringify();

	}
	// divide and return num1/num2
	virtual double evaluate(){ return (num1/num2);}
	// Convert a string of our operator and operands
	virtual std::string stringify(){
		return (str1 + " / " + str2);	
	}
};



#endif /* Header_hpp */
