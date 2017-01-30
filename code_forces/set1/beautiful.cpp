#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int count = 0;
	int mat[5][5];
	int location_1[2];

	for (int i = 0; i < 5; i++) {
		
		for (int j = 0; j < 5; j++) {
			cin >> mat[i][j];
			// cout << mat[i][j] << " ";
			if (mat[i][j] == 1) {
				location_1[0] = i;
				location_1[1] = j;
			}
		}

		// cout << endl;
	}

	if (mat[2][2] != 1) {
		count += abs(location_1[0]-2);
		count += abs(location_1[1]-2);

	}

	cout << count << endl;

}
