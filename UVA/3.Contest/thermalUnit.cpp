#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>

using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
		freopen("thermalUnit.in", "r", stdin);
		freopen("thermalUnit.out", "w", stdout);
	#endif

	int tc;
	cin >> tc;
	
	int counter = 1;
	while (tc--) {

		double temp, tempIncrease;
		cin >> temp >> tempIncrease;
		// cout << "temp " << temp << " tempIncrease " << tempIncrease << endl;
		double tempFahr = (9.0 / 5.0 * (temp)) + 32.0;

		tempFahr += tempIncrease;

		double tempCel = (5.0 / 9.0) * (tempFahr - 32.0);

		printf("Case %d: %.2f\n", counter, tempCel);
		counter++;
	}

	return 0; 
}
