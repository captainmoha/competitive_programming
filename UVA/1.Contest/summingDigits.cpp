#include <iostream> 
#include <stdio.h>

using namespace std;

int sumDigits(int n);
int main() {
	
	#ifndef ONLINE_JUDGE
		freopen("summingDigitsTest.txt", "r", stdin);
	#endif
	int n;
	
	while (cin >> n, n > 0) {
		int sum = 0;
		sum = sumDigits(n);
		cout << sum << endl;
	}

	return 0;
}

int sumDigits(int n) {
	if (n % 10 == n) {
		return n;
	}
	else {
		return sumDigits(n % 10 + sumDigits(n / 10));
	}
}