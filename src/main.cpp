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
		cout << calc.input << " = " <<calc.resolveOperator() << endl;

		if (calc.SyntaxChecker == false) {
			cout << "Invalid syntax" << endl;
		}
	}


	return (0);
}


//// PSEUDO CODE ////

/*
 *	string input = getinput();
 *
 *	string mainstring = input;
 *	while (operator == exists_in(mainstring)) { // Check if string contains operators '*' '/' '+' '-' IN THAT ORDER
 *
 *		create substring called LeftHandSide containing everything from previous operator OR begin if no previous operator
 *		create substring called RightHandSode containing eveything from the operator till the next operator OR end if no next operator
 *		double lhs = atof(LeftHandSide.c_str());
 *		double rhs = atof(RightHandSide.c_str());
 *		string operator = substr(RightHandSide-1, 1);
 *
 *		string temporary = NumberToString(lhs operator rhs);
 *
 *		replace(LeftHandSide+operator+Righthandside) with (temporary) in mainstring
 *	}
 *
 *	cout << input << " = " << mainstring << endl;
 */
