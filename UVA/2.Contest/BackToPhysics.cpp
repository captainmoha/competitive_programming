#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>

int sumArr(int* arr, int arrLen);
int getMinMoves(int *arr, int arrLen, int equilibriumVal);

using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
		freopen("BackToPhysics.txt", "r", stdin);
	#endif

	int v, t;
	while (cin >> v >> t) {
		// velocity = displacement / time
		int d = v * t;
		cout << d * 2 << endl;
	}

	
	return 0; 
}

