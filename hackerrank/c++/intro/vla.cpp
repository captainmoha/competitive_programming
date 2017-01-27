#include <iostream>

using namespace std;

int main(void) {
	int nQueries = 0, nArrs = 0;

	cin >> nArrs >> nQueries;

	int* arrs[nArrs];

	for (int arrIndex = 0; arrIndex < nArrs; arrIndex++) {

		// cout << "arr " << arrIndex << endl;
		int arrLen = 0;
		cin >> arrLen;

		arrs[arrIndex] =  new int[arrLen];

		for (int i = 0; i < arrLen; i++) {

			cin >> arrs[arrIndex][i];
			// cout << "getting input " << " arr[" << i << "]" << "= " << arrs[arrIndex][i] << endl;
		}
	}

	while(nQueries--) {
		int i = 0, j = 0;
		cin >> i >> j;
		cout << arrs[i][j] << endl;
	}

	for (int arrIndex = 0; arrIndex < nArrs; arrIndex++) {
		delete[] arrs[arrIndex];
	}

	return 0;
}