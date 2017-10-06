#include "header.h"
#include <boost/algorithm/string/erase.hpp>

	// to make program more dynamic, the input function should remove spaces
	string getinput() {
		string input = "";
		getline(cin, input);
		boost::algorithm::erase_all(input, " "); // removes all spaces in input string
		return (input);
	}


	void compute(string input) {

		// Locate a + operator and identify the numbers on each side of it
		size_t found = input.find('+');
		if (found != string::npos) {
			string LeftHandSide = input.substr(0,found);
			string RightHandSide = input.substr(found +1);

			int lhs = atoi(LeftHandSide.c_str());
			int rhs = atoi(RightHandSide.c_str());

			cout << lhs << " + " << rhs << " = " << lhs + rhs << endl;

		}
	}
