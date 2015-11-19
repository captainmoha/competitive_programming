#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <stdint.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("ecoPremium.in", "r", stdin);
		freopen("ecoPremium.out", "w", stdout);
	#endif
	
	int TC;
	if (cin >> TC) {
		while (TC--) {
		
			long summedBurden = 0;
			int nFarmers;

			cin >> nFarmers;
			// cout << nFarmers << endl;

			while(nFarmers--) {
				long farmyardArea, nAnimals, envFriendlyN;
				cin >> farmyardArea >> nAnimals >> envFriendlyN;
				// cout << " " << farmyardArea << " " << nAnimals << " " << envFriendlyN << endl;
				// summedBurden += (nAnimals / farmyardArea) * envFriendlyN * nAnimals becomes
				summedBurden += (farmyardArea * envFriendlyN);  // because nAnimals cancels out
			}
			cout << summedBurden << endl;
		}
	}
	
	return 0; 
}
