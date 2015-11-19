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
		freopen("brickGame.in", "r", stdin);
		freopen("brickGame.out", "w", stdout);
	#endif

	int tc;
	int counter = 1; 
	cin >> tc;

	while (tc--) {

		int nMembers;
		cin >> nMembers;
		int team[nMembers];
		for (int i = 0; i < nMembers; i++) {
			cin >> team[i];
		}


		sort(team, team + nMembers);
		int captain = team[nMembers/2];
		cout << "Case " << counter << ": " << captain << endl;
		counter++;
	}
	
	return 0; 
}
