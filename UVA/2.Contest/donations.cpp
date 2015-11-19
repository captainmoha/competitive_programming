#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
	int tc = 0;
	string rep = "report";
	string don = "donate";
	
	int totalDonations = 0;
	cin >> tc;
	cin.ignore();
	while (tc--) {
		string input = "";
		getline(cin, input);
		// cout <<"Debug; " << input << endl;
		if (input.substr(0, 6) == don) {
			string num = input.substr(6, (input.length() - 6));
			totalDonations += atoi(num.c_str());
			// cout << totalDonations << endl;
		}
		else if (input.substr(0,6) == rep){
			cout << totalDonations << endl;
		}
	}
	return 0;
}
