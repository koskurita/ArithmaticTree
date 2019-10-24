#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"


class Sub: public Base{

private:
    double num1, num2;
public:

    Sub(Base *val1, Base *val2): Base(){
        num1 = val1->evaluate();
        num2 = val2->evaluate();
    }


    virtual double evaluate(){
        return num1 - num2;
    }

    virtual std::string stringify(){
        std::string newString;
        newString = std::to_string(num1) + " - " + std::to_string(num2);
        return newString;

    }
};
#endif  // __SUB_HPP__
