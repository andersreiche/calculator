#include "calculator.h"

calculator::calculator() {
	input = "";
	temporary = "";
	SyntaxChecker = true;

}

calculator::~calculator() {
	// TODO Auto-generated destructor stub
}

// to make input more general, the input function should remove spaces
void calculator::getinput() {
	getline(cin, input);
	boost::algorithm::erase_all(input, " "); // removes all spaces in input string
}

int calculator::compute(string input) {
	// TODO this function should take a string with a single operator and two numbers and resolve them and return their value as a string

	// Locate a + operator and identify the numbers on each side of it
	size_t found = input.find('+');
	if (found != string::npos) {
		string LeftHandSide = input.substr(0, found);
		string RightHandSide = input.substr(found + 1);

		int lhs = atoi(LeftHandSide.c_str());
		int rhs = atoi(RightHandSide.c_str());

		cout << lhs << " + " << rhs << " = " << lhs + rhs << endl;
		return (0);
	}
	return (-1);
}

string calculator::resolveOperator(string input) {
	string output = "";
	// TODO this function should take a string containing operators and numbers, then use PEMDAS rules to cut out a single operator surrounded by two numbers and return it

	return (output);
}
