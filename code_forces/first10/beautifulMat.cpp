/*http://codeforces.com/problemset/problem/263/A*/

#include <iostream>
// #include <stdio.h>
#include <cmath>

using namespace std;

int main() {

	// freopen("beautifulMat.in", "r", stdin);
	// freopen("beautifulMat.out", "w", stdout);

	int in[5][5];

	int posOf1[2];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> in[i][j];
			if (in[i][j] == 1) {
				posOf1[0] = i;
				posOf1[1] = j;
			}
		}
	}
	
	int minMoves = abs(2 - posOf1[0]) + abs(2 - posOf1[1]);
	cout << minMoves << endl;
	return 0;
}
