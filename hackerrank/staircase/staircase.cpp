#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	char sp = ' ';
	char hash = '#';

	int x = n;

	for (int i = 0; i < n; i++) {
		int j, k;

		for (j = 0; j < x - 1; j++) {
			cout << sp;
		}

		for (k = 0; k < n - j + 1; k++) {
			cout << hash;
		}
		cout << endl;
		x--;
	}
	return 0; 
}

