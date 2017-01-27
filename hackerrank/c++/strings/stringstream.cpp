#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

typedef vector<int> intVec;


intVec csvToVector(string str);

int main(void) {


	string str = NULL;

	/*cin >> str;*/
	getline(cin, str);

	intVec tokens = csvToVector(str);

	for (int i = 0; i < tokens.size(); i++) {
		cout << tokens.at(i) << endl;
	}


	return 0;
}

intVec csvToVector(string str) {
	stringstream ss(str);
	intVec result;
	

	while(!ss.eof()) {
		int num;
		char commaHolder;
		ss >> num >> commaHolder;
		// cout << "num " << num << endl;
		result.push_back(num);
	}

	// cout << "size: " << result.size() << endl;
	return result;
}