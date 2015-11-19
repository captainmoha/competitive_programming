#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <map>
using std::cout;
using std::cin;
using std::endl;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("errCorrection.in", "r", stdin);
		freopen("errCorrection.out", "w", stdout);
	#endif

	int n;
	while (true) {
		cin >> n;
		if (n == 0) {
			break;
		}
		int bits[n][n];
		int colSums[n];
		int rowSums[n];

		for (int w = 0; w < n; w++) {
			colSums[w] = 0;
			rowSums[w] = 0;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> bits[i][j];
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				rowSums[i] += bits[i][j];
				colSums[i] += bits[j][i];
			}
			rowSums[i] %= 2;
			colSums[i] %= 2;
		}
		int c = 0;
		int r = 0;
		for (int k = 0; k < n; k++) {
			// cout << "r " << rowSums[k] << " c " << colSums[k] << endl;
			
			// cout << "r " << rowSums[k] << " c " << colSums[k] << endl;
			if (rowSums[k] != 0) {
				r++;
			}
			else if (colSums[k] != 0) {
				c++;
			}

		}
		if (c > 1 || r > 1) {
			cout << "Corrupt" << endl;
		}
		else if (c == 0 && r == 0) {
			cout << "OK" << endl;
		}
		else {
			int i, j;
			bool isSameVal = false;
			for (int p = 0; p < n; p++) {
				if ((colSums[p] % 2 != 0) && (rowSums[p] % 2 != 0)) {
					i = p + 1;
					j = p + 1;
					cout << "Change bit " << "(" << i << "," << j << ")" << endl;
					isSameVal = true;
					break;
				}
				if (colSums[p] % 2 != 0) {
					j = p + 1;
				}
				else if (rowSums[p] % 2 != 0) {
					i = p + 1;
				}
			}
			if (!isSameVal) {
				cout << "Change bit " << "(" << i << "," << j << ")" << endl;
			}
			// 
		}
		// cout << endl;
		
	}
	return 0; 
}
