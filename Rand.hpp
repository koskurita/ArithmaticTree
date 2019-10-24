#ifndef __RAND_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <stdlib.h>

class Rand: public Base {
private:
	double randValue;
public:
	Rand() : Base() { 
		this->randValue = rand()%100;
	}
	virtual double evaluate(){
		return this->randValue;
	}
	virtual std::string stringify(){
		return std::to_string(randValue);
	}
}




