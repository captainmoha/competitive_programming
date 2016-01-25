#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	freopen("hg.in", "r", stdin);

	int mat[6][6];

	for (int i = 0; i < 6; i++) {

		for (int j = 0; j < 6; j++) {
			cin >> mat[i][j];
		}
	}

	for (int i = 0; i < 6; i++) {

		for (int j = 0; j < 6; j++) {
			cout << mat[i][j] << " ";
		}

		cout << "\n";
	}


	return 0;
}