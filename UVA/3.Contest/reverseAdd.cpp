#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>

using namespace std;

void reverseAdd(long n);
long reverseNum(long n);

int main() {
	#ifndef ONLINE_JUDGE
		freopen("reverseAdd.in", "r", stdin);
		freopen("reverseAdd.out", "w", stdout);
	#endif

	int tc;
	cin >> tc;

	while (tc--) {
		long num;
		cin >> num;
		reverseAdd(num);
	}

	return 0; 
}

void reverseAdd(long n) {
	int iterCount = 1;

	long revN = reverseNum(n);
	long sum = revN + n;
	while (sum != reverseNum(sum)) {
		n = sum;
		revN = reverseNum(n);
		sum = revN + n;
		iterCount++;
	}
	
	cout << iterCount << " " << sum << endl;
}

long reverseNum(long n) {
	long revN = 0;
	while (n > 0) {
		int elt = n % 10;

		revN = revN * 10 + elt;
		n /= 10;
	}

	return revN;
}