#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("bafana.in", "r", stdin);
		freopen("bafana.out", "w", stdout);
	#endif

	int tc;
	int count = 1;
	cin >> tc;
	while (tc--) {
		int nPlayers, startPlayer, nPasses;
		int lastPlayer = 0;
		cin >> nPlayers >> startPlayer >> nPasses;

		
		lastPlayer = (startPlayer + nPasses)%nPlayers;
		
		if (lastPlayer == 0) {
			lastPlayer = nPlayers;
		}
		cout << "Case " << count << ": " << lastPlayer << endl;
		count++; 
	}
	

	return 0; 
}
