#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
		freopen("median.txt", "r", stdin);
	#endif
	vector<long> v;
	long currentElt;
	int count = 0;
	while (cin >> currentElt) {
		v.resize(count + 1);	// grow the vector ny one with each insertion
		// cout << "CL: " << currentElt << endl;

		v[count] = currentElt;
		long median;
		sort(v.begin(), v.end()); // sort the vector

		// cout << "size: " << v.size() << endl;

		if ((v.size() % 2) == 0) {					// if the length is even
			int middlePoint = v.size() / 2 - 1;
			long median_1 = v[middlePoint];
			long median_2 = v[middlePoint + 1];
			median = (median_1 + median_2) / 2;

		}

		else {										// if the length is odd
			int middlePoint = v.size() / 2;
			median = v[middlePoint]; 
		}

		count++;

		cout <<  median << endl;                   // print current median
	}
	
	return 0;
}
