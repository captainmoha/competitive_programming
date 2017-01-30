#include <iostream>

using namespace std;

int main() {
	int n;
	string s;
 
	int dWon = 0, aWon = 0;
	const string d = "Danik";
	const string a = "Anton";
	const string tie = "Friendship";

	cin >> n >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A') {
			aWon++;
		}
		else {
			dWon++;
		}
	}

	if (aWon > dWon) {
		cout << a << endl;
	}

	else if (dWon > aWon) {
		cout << d << endl;
	}
	else {
		cout << tie << endl;
	}
	
	return 0;
}
