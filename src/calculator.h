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
#include <sstream>
using namespace std;

class calculator {
private:

public:
	////  Vars    ////
	string input;		// The input string
	string mainstring;	// main string to be working on
	string temporary;	// snippets from the main string to be modified
	bool SyntaxChecker; // should be set to true or false inside methods
	////  Constructors  ////
	calculator();
	virtual ~calculator();

	////  Methods  ////
	bool getinput();
	void zip();
	void snip(string input);
	string resolveOperator ();
};

#endif /* CALCULATOR_H_ */
