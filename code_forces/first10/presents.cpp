/*http://codeforces.com/problemset/problem/136/A*/

#include <iostream>
// #include <stdio.h>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>
#include <map>

using namespace std;

int main() {

	// freopen("presents.in", "r", stdin);
	// freopen("presents.out", "w", stdout);

	int n;
	cin >> n;
	int in[n];
	int out[n];
	
	for (int i = 0; i < n; i++) {
		cin >> in[i];
	}

	// fill the output array according to the rules
	for (int j = 0; j < n; j++) {
		// put the ith friend in place of the p_i place
		out[in[j] - 1] = j + 1;
	}

	for (int i = 0; i < n; i++) {
		cout << out[i] << " ";
	}
	cout << endl;

	return 0;
}
