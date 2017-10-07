//============================================================================
// Name        : calculator
// Author      :
// Version     :
// Copyright   : Open source
// Description :
//============================================================================
#include "header.h"
#include "calculator.h"

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
