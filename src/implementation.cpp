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

		size_t found = input.find('+');
		if (found != string::npos) {
			cout << "found operator at position:  " << found << endl;
			cout << "left hand side: " << input.substr(0,found) << endl;
			cout << "right hand side: " << input.substr(found +1) << endl;

		}
	}
