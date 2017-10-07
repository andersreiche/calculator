#include "calculator.h"

template<typename T>
std::string NumberToString(T Number) {
	std::ostringstream s;
	s << Number;
	return (s.str());
}

calculator::calculator() {
	input = "";
	temporary = "";
	SyntaxChecker = true;

}

calculator::~calculator() {
	cout << "\n\n					bye!\n\n";
}

// to make input more general, the input function should remove spaces
bool calculator::getinput() {
	getline(cin, input);
	mainstring = input;
	boost::algorithm::erase_all(mainstring, " "); // removes all spaces in input string
	if (input == "exit")
		return (false);
	return (true);
}

void calculator::snip(string mainstring) {
	// TODO this function should take a string containing operators and numbers, then use PEMDAS rules to cut out a single operator surrounded by two numbers and return it

	//// MULTIPLY ////
	{
		size_t found = mainstring.find('*');
		if (found != string::npos) {
			string LeftHandSide = mainstring.substr(0, found);
			string RightHandSide = mainstring.substr(found + 1);

			double lhs = atoi(LeftHandSide.c_str());
			double rhs = atoi(RightHandSide.c_str());

			temporary = NumberToString(lhs * rhs);
			return;
		}
	}
	{
		//// DIVIDE ////
		size_t found = mainstring.find('/');
		if (found != string::npos) {
			string LeftHandSide = mainstring.substr(0, found);
			string RightHandSide = mainstring.substr(found + 1);

			double lhs = atoi(LeftHandSide.c_str());
			double rhs = atoi(RightHandSide.c_str());

			temporary = NumberToString(lhs / rhs);
			return;
		}
	}
	{
		//// ADD ////
		size_t found = mainstring.find('+');
		if (found != string::npos) {
			string LeftHandSide = mainstring.substr(0, found);
			string RightHandSide = mainstring.substr(found + 1);

			double lhs = atoi(LeftHandSide.c_str());
			double rhs = atoi(RightHandSide.c_str());

			temporary = NumberToString(lhs + rhs);
			return;
		}
	}
	{
		//// SUBTRACT ////
		size_t found = mainstring.find('-');
		if (found != string::npos) {
			string LeftHandSide = mainstring.substr(0, found);
			string RightHandSide = mainstring.substr(found + 1);

			double lhs = atoi(LeftHandSide.c_str());
			double rhs = atoi(RightHandSide.c_str());

			temporary = NumberToString(lhs - rhs);
			return;
		}
	}
}

string calculator::resolveOperator(string mainstring) {
	string output = "";

	{	//// ADD ////
		size_t found = mainstring.find('+');
		if (found != string::npos) {
			string LeftHandSide = mainstring.substr(0, found);
			string RightHandSide = mainstring.substr(found + 1);

			double lhs = atoi(LeftHandSide.c_str());
			double rhs = atoi(RightHandSide.c_str());

			output = NumberToString(lhs + rhs);
			return (output);
		}
	}
	{	//// SUBTRACT ////
		size_t found = mainstring.find('-');
		if (found != string::npos) {
			string LeftHandSide = mainstring.substr(0, found);
			string RightHandSide = mainstring.substr(found + 1);

			double lhs = atoi(LeftHandSide.c_str());
			double rhs = atoi(RightHandSide.c_str());

			output = NumberToString(lhs - rhs);
			return (output);
		}
	}
	{	//// MULTIPLY ////
		size_t found = mainstring.find('*');
		if (found != string::npos) {
			string LeftHandSide = mainstring.substr(0, found);
			string RightHandSide = mainstring.substr(found + 1);

			double lhs = atoi(LeftHandSide.c_str());
			double rhs = atoi(RightHandSide.c_str());

			output = NumberToString(lhs * rhs);
			return (output);
		}
	}
	{	//// DIVIDE ////
		size_t found = mainstring.find('/');
		if (found != string::npos) {
			string LeftHandSide = mainstring.substr(0, found);
			string RightHandSide = mainstring.substr(found + 1);

			double lhs = atoi(LeftHandSide.c_str());
			double rhs = atoi(RightHandSide.c_str());

			output = NumberToString(lhs / rhs);
			return (output);
		}
	}
	return (0);
}

void calculator::zip() {
	// TODO this should combine the temporary string with the main string
}
