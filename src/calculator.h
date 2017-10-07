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
#include <boost/algorithm/string/erase.hpp>
using namespace std;

class calculator {
public:
	////  Vars    ////
	string input;		// main string to be working on
	string temporary;	// snippets from the main string to be modified
	bool SyntaxChecker; // should be set to true or false inside methods
	////  Constructors  ////
	calculator();
	virtual ~calculator();

	////  Methods  ////
	void getinput();
	int compute(string input);
	string resolveOperator (string input);
};

#endif /* CALCULATOR_H_ */
