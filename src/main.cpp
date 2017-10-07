//============================================================================
// Name        : calculator
// Author      :
// Version     :
// Copyright   : Open source
// Description :
//============================================================================

#include "calculator.h"
calculator calc;
int main() {
	cout << "\n\n	Calculator learning project by Anders Reiche " << endl;
	cout << "		type \"exit\" to end the program" << endl;

	while (calc.getinput() == true) {
		cout << calc.input << " = " <<calc.resolveOperator(calc.input) << endl;

		if (calc.SyntaxChecker == false) {
			cout << "Invalid syntax" << endl;
		}
	}


	return (0);
}
