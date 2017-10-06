//============================================================================
// Name        : calculator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "header.h"

int main() {
	cout << "Calculator learning project by Anders Reiche " << endl;
	cout << "type \"exit\" to end the program" << endl;
	string input = "";


	while (input != "exit") {
		input = getinput();
		int SyntaxChecker = 0;
		SyntaxChecker = compute(input);

		if (input != "exit" && SyntaxChecker == 0) {
			cout << "Invalid syntax" << endl;
		}
	}


	cout << "bye!" << endl;
	return (0);
}
