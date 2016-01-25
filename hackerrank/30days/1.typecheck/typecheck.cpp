#include <iostream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::getline;
using std::string;

string checkType(string inp);

int main() {

	/*dynamic one (works with any input)*/

	// string i, res;
	// do {
	// 	getline(cin, i);
	// 	res = checkType(i);
	// 	cout << res << "\n";
	// } while (i != "EXIT");
	
	/*static one (works with what's inside the string)*/

	const string HR_INP[] = {"5.35", "a", "false", "100", "I am a code monkey", "true", "17.3", "c", "derp"};
	string i, res;

	for (int k = 0; k < 9; k++) {
		
		i = HR_INP[k];
		res = checkType(i);
		cout << res << "\n";
	}
	
	return 0;	
}

string checkType(string inp) {

	int i;
	double f;
	char c;
	string s;
	bool b;
	
	if (f = atof(inp.c_str())) {
		i = f;

		if (i == f) {
			return "Primitive : int";
		}

		return "Primitive : double";
	}

	else {
		if (inp.length() == 1) {
			return "Primitive : char";
		}

		else if (inp == "true" || inp == "false") {
			return "Primitive : boolean";
		}

		return "Referenced : String";
	}
}
