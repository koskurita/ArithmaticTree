#ifndef __OP_HPP__
#define  __OP_HPP__

#include "base.hpp"

class Op : public Base {
private:
	double value;
public:
        Op (double value) : Base() { this->value = value; }
        virtual double evaluate() { return this->value; }
        virtual std::string stringify() { return std::to_string(value); }
};

#endif //__OP_HPP__
