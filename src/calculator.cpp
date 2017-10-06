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
		int result = 0;
		result = compute(input);

		if (input != "exit" && result == NULL) {
			cout << "Invalid syntax" << endl;
		}

	}
	cout << "bye!" << endl;
	return (0);
}
