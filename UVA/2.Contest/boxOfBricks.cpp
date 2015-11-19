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
		freopen("boxOfBricks.txt", "r", stdin);
	#endif

	int n;
	int counter = 1;
	while (cin >> n) {

		if (n == 0) {
			break;
		}

		int set[n];
		for (int i = 0; i < n; i++) {
			cin >> set[i];
			// cout << set[i] << " ";
		}

		int sum = sumArr(set, n);
		int equilibriumVal = sum / n;

		int minMoves = getMinMoves(set, n, equilibriumVal);
		cout << "Set #" << counter << endl;
		cout << "The minimum number of moves is " << minMoves << "." << endl << endl;
		counter++;
	}

	
	return 0; 
}

int sumArr(int* arr, int arrLen) {
	int sum = 0;
	for (int i = 0; i < arrLen; i++) {
		sum += arr[i];
	}
	return sum;
}

int getMinMoves(int *arr, int arrLen, int equilibriumVal) {
	
	bool isDone = false;
	int counter = 0;
	

	for (int i = 0; i < arrLen; i++) {

		if (arr[i] > equilibriumVal) {
			counter += arr[i] - equilibriumVal; 	

		}
	}

	return counter;
}