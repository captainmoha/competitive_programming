#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("idCodes.in", "r", stdin);
		freopen("idCodes.out", "w", stdout);
	#endif
	
	string TC;
	while (cin >> TC) {
		if (TC == "#") {
			break;
		}

		else {
			int isThere = next_permutation(TC.begin(), TC.end());
			if (isThere) {
				cout << TC << endl;
			}
			
			else {
				cout << "No Successor" << endl;
			}

		}
	}
	return 0; 
}
