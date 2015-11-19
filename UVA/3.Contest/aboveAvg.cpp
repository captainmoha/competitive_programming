#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <map>
using std::cout;
using std::cin;
using std::endl;
using std::accumulate;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("aboveAvg.in", "r", stdin);
		freopen("aboveAvg.out", "w", stdout);
	#endif

	int tc;
	cin >> tc;
	while (tc--) {
		int nStudents;
		cin >> nStudents;
		double grades[nStudents];
		for (int i = 0; i < nStudents; i++) {
			cin >> grades[i];
			// cout << grades[i] << " ";
		}

		double sum = accumulate(grades, grades+nStudents,0);
		
		double avg = sum / nStudents;
		// cout << "avg " << avg << endl;

		double aboveAvgCount = 0;
		for (int j = 0; j < nStudents; j++) {
			if (grades[j] > avg) {
				aboveAvgCount++;
			}
		}
		// cout << "aboveavgc " << aboveAvgCount << endl;
		double percent = (aboveAvgCount / nStudents) * 100;
		printf("%.3f\%\n", percent);
		// cout << endl;
	}
	return 0; 
}
