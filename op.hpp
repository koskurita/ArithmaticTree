#ifndef __OP_HPP__
#define  __OP_HPP__

#include "base.hpp"
#include <string.h>

class Op : public Base {
private:
	double value;
public:
        Op (double value) : Base() { this->value = value; }
        virtual double evaluate() { return this->value; }
        
	virtual std::string stringify() {
		std::string numString = std::to_string(this->value);
		int str_length = numString.length();
		
		numString = numString.substr(0,str_length-5);  
		return numString;
	}
};

#endif //__OP_HPP__
