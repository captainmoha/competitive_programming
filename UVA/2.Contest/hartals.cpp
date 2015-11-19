#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("hartals.in", "r", stdin);
		freopen("hartals.out", "w", stdout);
	#endif
	
	int tc;
	cin >> tc;
	while(tc--) {
		int nDays, nParties;
		cin >> nDays;
		cin >> nParties;
		int hartalParms[nParties];
		for (int i = 0; i < nParties; i++) {
			cin >> hartalParms[i];
			// cout << hartalParms[i] << " ";
		}
		// cout << endl;

		int wastedDays = 0;
		for (int day = 1; day <= nDays; day++) {
			// cout << "day " << day << endl;
			for (int i = 0; i < nParties; i++) {
				// cout << "param " << hartalParms[i] << endl;
				if (day % hartalParms[i] == 0 && (day%7 != 0) && ((day-6) % 7 != 0)) {
					wastedDays++; 
					break;			// this day is wasted go to the next one;
					// cout << "wasted days " << wastedDays << endl;
				}
			}
		}

		cout << wastedDays << endl;

	}
	
	return 0; 
}

