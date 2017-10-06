#include "header.h"
#include <boost/algorithm/string/erase.hpp>

	// to make program more dynamic, the input function should remove spaces
	string getinput() {
		string input = "";
		getline(cin, input);
		boost::algorithm::erase_all(input, " "); // removes all spaces in input string
		return (input);
	}



