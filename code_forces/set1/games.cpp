#include <iostream>
#include <cmath>
#include <map>


using namespace std;
int main() {
	int n;
	cin >> n;

	// teams and 2 uniforms
	int teams[n][2];

	for (int i = 0; i < n; i++) {
		cin >> teams[i][0];
		cin >> teams[i][1];
	}

	int count = 0;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			if (i != j) {
				if (teams[i][0] == teams[j][1]) {
					count++;
				}
			}

		}
		
	}

	cout << count << endl;
}
