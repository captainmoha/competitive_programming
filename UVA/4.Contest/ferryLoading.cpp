#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <map>
#include <queue>

typedef std::vector<std::string> stringVec;
typedef std::vector<std::string>::iterator stringVecIter;
typedef std::queue<int> intQueue;

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::accumulate;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("ferryLoading.in", "r", stdin);
		freopen("ferryLoading.out", "w", stdout);
	#endif

	int tc = 0;
	cin >> tc;

	while (tc--) {
		int len, numCars;

		cin >> len >> numCars;

		while (numCars--) {
			int carLen;
			string side;

			cin >> carLen >> side;
			cout << carLen << " " << side << endl;
		}
	}
	return 0; 
}
