#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"

class Pow: public Base{
private:
        double num1, num2;
	std::string str1, str2;
public:

        Pow(Base *val1,Base *val2): Base(){
                num1 = val1->evaluate();
                num2 = val2->evaluate();
		str1 = val1->stringify();
		str2 = val2->stringify();
	}

        virtual double evaluate(){
		double total = 1;
		for(int i = 0; i<num2; i++){
			total *= num1;
		}
                return total;
        }

        virtual std::string stringify(){
         	return (str1 + "**" + str2);
        }
};
#endif // __POW_HPP__

