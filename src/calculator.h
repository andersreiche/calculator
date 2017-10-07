/*
 * calculator.h
 *
 *  Created on: 7 Oct 2017
 *      Author: Anders
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_
#include <string>
#include <iostream>
using namespace std;

class calculator {
public:
	calculator();
	virtual ~calculator();
	string getinput();
	int compute(string input);
	string resolveOperator (string input);
};

#endif /* CALCULATOR_H_ */
