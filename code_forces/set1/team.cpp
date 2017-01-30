#include <iostream>

using namespace std;

int main() {
	int n;
	int count = 0;
	char contestants[3];

	cin >> n;
	while(n--) {

		int confidence = 0;
		for (int i = 0; i < 3; i++) {
			cin >> contestants[i];
			if (contestants[i] == '1') {
				confidence++;
			}
		}

		if (confidence >= 2) {
			count++;
		}
	}

	cout << count << endl;
}
