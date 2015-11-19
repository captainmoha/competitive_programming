#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

typedef map<char, char> mcc;
typedef map<char, char>::iterator mccIter;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("automateGrades.in", "r", stdin);
		freopen("automateGrades.out", "w", stdout);
	#endif

	int tc;
	int counter = 1;
	cin >> tc;
	while (tc--) {
		int term1, term2, final, attendance;
		int tests[3];

		cin >> term1 >> term2 >> final >> attendance;
		for (int i = 0; i < 3; i++) {
			cin >> tests[i];
		}
		sort(tests, tests + 3, greater<int>());
		double total = term1 + term2 + final + attendance + ((tests[0] + tests[1])/2.0);

		// for (int i = 0; i < 3; i++) {
		// 	cout << tests[i] << " ";
		// }
		// cout << endl;
		
		char grade;
		if (total >= 90) {
			grade = 'A';
		}

		else if (total >= 80) {
			grade = 'B';
		}

		else if (total >= 70) {
			grade = 'C';
		}

		else if (total >= 60) {
			grade = 'D';
		}

		else {
			grade = 'F';
		}

		cout << "Case " << counter << ": " << grade << endl;
		counter++;
	}

	return 0; 
}
