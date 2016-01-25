/*http://codeforces.com/problemset/problem/58/A*/

#include <iostream>
// #include <stdio.h>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

int main() {

	// freopen("chat.in", "r", stdin);
	// freopen("chat.out", "w", stdout);
	
	string in;
	string word = "hello";
	cin >> in;

	short start = 0;
	short goal = 5;

	for (char c : in) {
		
		if (c == word[start]) {
			start++;
		}
		if (start == goal) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}
