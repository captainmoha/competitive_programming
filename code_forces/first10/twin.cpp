/*http://codeforces.com/problemset/problem/160/A*/

#include <iostream>
// #include <stdio.h>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {

	// freopen("twin.in", "r", stdin);
	// freopen("twin.out", "w", stdout);
	
	short n;
	cin >> n;  // number of coins

	vector<short> in;  // vector to hold the values of the coins


	// fill it up
	for (short i = 0; i < n; i++) { 
		short temp = 0;
		cin >> temp;
		in.push_back(temp);
	} 

	// sort it and then reverse it so that I can later take the least amount of coins with max value
	sort(in.begin(), in.end());	
	reverse(in.begin(), in.end());

	// partition the vector 
	vector<short> me, bro;

	for (short k = 0; k < in.size(); k++) {

		// I will only take the first and highest value coin for now
		if (k == 0) {
			me.push_back(in.at(k));
		}
		else {
			bro.push_back(in.at(k));
		}
	}

	// get the sum of what I have and what my bro has
	short meSum = accumulate(me.begin(), me.end(), 0);
	short broSum = accumulate(bro.begin(), bro.end(), 0);

	short start = 0;   // this is where I will start taking coins (from the begining of my bro vector)

	// take coins until the sum of what I have is more than the sum of what my bro has
	while (meSum <= broSum) {

		me.push_back(bro.at(start));
		bro.at(start) = 0;
		start++;
		meSum = accumulate(me.begin(), me.end(), 0);
		broSum = accumulate(bro.begin(), bro.end(), 0);

	}

	// this is how many coins I ended up taking
	cout << me.size() << endl;
	return 0;
}
