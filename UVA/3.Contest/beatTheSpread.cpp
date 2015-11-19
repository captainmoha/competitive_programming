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
		freopen("beatTheSpread.in", "r", stdin);
		freopen("beatTheSpread.out", "w", stdout);
	#endif
	int tc;
	cin >> tc;

	while (tc--) {
		long sum, absDiff;
		cin >> sum >> absDiff;
		long score1, score2;

		score1 = (sum + absDiff) / 2;
		score2 = (sum - absDiff) / 2;

		if ((score1 + score2) == sum && (abs(score1 - score2) == absDiff) && (score2 > 0)) {
			cout << max(score1, score2) << " " << min(score1, score2) << endl;
		}
		else if (sum == 0 && absDiff == 0) {
			cout << "0" << " " << "0" << endl;
		}

		else if (sum == absDiff) {
			cout << sum << " " << "0" << endl;
		}
		else {
			cout << "impossible" << endl;
		}
	}
	

	return 0; 
}
