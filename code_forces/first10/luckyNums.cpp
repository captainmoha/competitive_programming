/*http://codeforces.com/problemset/problem/122/A*/

#include <iostream>
// #include <stdio.h>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>
#include <map>

using namespace std;

bool isLucky(string s);
bool isAlmostLucky(string s);

int main() {

	// freopen("luckyNums.in", "r", stdin);
	// freopen("luckyNums.out", "w", stdout);

	string in;
	cin >> in;
	
	if (isLucky(in)) {
		cout << "YES" << endl;
	}

	else {

		if (isAlmostLucky(in)) {
			cout << "YES" << endl;
		}

		else {
			cout << "NO" << endl;	
		}
	}

	return 0;
}

bool isLucky(string s) {
	for (char c : s) {

		if (c != '4' && c != '7') {
			return false;
		}
	}

	return true;
}

bool isAlmostLucky(string s) {

	int luckyNums[] = {4, 7, 47, 74, 44, 77};

	int num = atoi(s.c_str());
	
	for (int i : luckyNums) {
		if (num%i == 0) {
			return true;
		}
	}

	return false;
}

