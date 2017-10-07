//============================================================================
// Name        : calculator
// Author      :
// Version     :
// Copyright   : Open source
// Description :
//============================================================================
#include "header.h"
#include "calculator.h"
calculator calc;
int main() {
	cout << "Calculator learning project by Anders Reiche " << endl;
	cout << "type \"exit\" to end the program" << endl;
	string input = "";

	while (input != "exit") {
		calc.getinput();
		calc.SyntaxChecker = calc.compute(input);

		if (input != "exit" && calc.SyntaxChecker == 0) {
			cout << "Invalid syntax" << endl;
		}
	}

	cout << "bye!" << endl;
	return (0);
}
