#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"


class Sub: public Base{

private:
	double num1, num2;
  	std::string str1, str2;
public:

    Sub(Base *val1, Base *val2): Base(){
        num1 = val1->evaluate();
        num2 = val2->evaluate();
	str1 = val1->stringify();
	str2 = val2->stringify();
	
    }


    virtual double evaluate(){
        return val1->evaluate() - val2->evaluate();
    }

    virtual std::string stringify(){        
	return (val1->stringify() + " - " + val2->stringify());	
    }

};
#endif  // __SUB_HPP__
