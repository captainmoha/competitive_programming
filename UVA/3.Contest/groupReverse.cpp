#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

typedef map<char, char> mcc;
typedef map<char, char>::iterator mccIter;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("groupReverse.in", "r", stdin);
		freopen("groupReverse.out", "w", stdout);
	#endif

	int groups;
	string input;
	while (true) {
		cin >> groups;
		if (groups == 0) {
			break;
		} 
		cin >> input;

		string subStrings[groups];
		int subLength = input.length() / groups;
		
		int counter = 0;
		string reveresed = "";
		for (int i = 0; i < input.length(); i += subLength) {
			string currentStr = input.substr(i, subLength);
			reverse(currentStr.begin(), currentStr.end());
			reveresed += currentStr;
		}
		cout << reveresed << endl;
	}

	return 0; 
}
