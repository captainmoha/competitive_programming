/*http://codeforces.com/problemset/problem/339/A*/


// submitted
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string simplify(string s);

int main() {

	string in;
	cin >> in;
	cout << simplify(in) << endl;
	
	return 0;
}

string simplify(string s) {

	string out = "";
	vector<char> nums;

	for (int i = 0; i < s.length(); i+=2) {
		nums.push_back(s[i]);
	}
	sort(nums.begin(), nums.end());

	for (int j = 0; j < nums.size(); j++) {
		out += nums.at(j);

		if (j < nums.size() - 1) {
			out+= "+";
		}
	}
	
	return out;
}

// used for testing 

// #include <iostream>
// #include <stdio.h>
// #include <algorithm>
// #include <vector>

// using namespace std;

// string simplify(string s);

// int main() {

// 	freopen("hMath.in", "r", stdin);
// 	freopen("hMath.out", "w", stdout);
	
// 	int tc;
// 	cin >> tc;
// 	cout << tc;
// 	while (tc--) {
// 		string in;
// 		cin >> in;
// 		cout << simplify(in) << endl;
// 	}
// 	return 0;
// }

// string simplify(string s) {

// 	string out = "";
// 	vector<char> nums;

// 	for (int i = 0; i < s.length(); i+=2) {
// 		nums.push_back(s[i]);
// 	}
// 	sort(nums.begin(), nums.end());

// 	for (int j = 0; j < nums.size(); j++) {
// 		out += nums.at(j);

// 		if (j < nums.size() - 1) {
// 			out+= "+";
// 		}
// 	}
// 	return out;
// }
