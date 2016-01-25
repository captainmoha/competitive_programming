/*http://codeforces.com/problemset/problem/112/A*/

#include <iostream>
// #include <stdio.h>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

string toLower(string s);
int getDiff(string a, string b);

int main() {

	// freopen("lexo.in", "r", stdin);
	// freopen("lexo.out", "w", stdout);
	
	string one, two;
	cin >> one >> two;
	
	one  = toLower(one);
	two  = toLower(two);

	int res = getDiff(one, two);

	// cout << "one " << one << "\ntwo " << two << endl;

	cout << res << endl;
	return 0;
}

string toLower(string s) {
	string out = "";

	for (char c : s) {
		if (c < 'a') {
			char curr = char(c + ' ');
			out += curr;
			continue;
		}

		out += c;

 	}

 	return out;
}

int getDiff(string a, string b) {
	if (a == b) {
		return 0;
	}

	else if (a < b) {
		return -1;
	}

	else {
		return 1;
	}
}