#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("combinationLock.in", "r", stdin);
		freopen("combinationLock.out", "w", stdout);
	#endif
	int startPos, firstC, secondC, thirdC;
	while (true) {
		cin >> startPos >> firstC >> secondC >> thirdC;
		int degreesPerMark = 9;  // 360 / 40
		int fullTurns = 1080;     // 360 + 360 + 360
		int total = fullTurns;
		if (startPos == 0 && firstC == 0 && secondC == 0 && thirdC == 0) {
			break;
		} 

		else {

			if(startPos < firstC)
                total += (40 - firstC+startPos) * degreesPerMark;
            else
                total += (startPos - firstC) * degreesPerMark;
            if(firstC > secondC)
                total += (40 - firstC+secondC) * degreesPerMark;
            else
                total += (secondC - firstC) * degreesPerMark;
            if(secondC < thirdC)
                total += (40 - thirdC + secondC) * degreesPerMark;
            else
                total += (secondC - thirdC) * degreesPerMark;
		}
		cout << total << endl;
	}
	
	return 0; 
}
