#include <iostream> 
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main() {
	
	#ifndef ONLINE_JUDGE
		freopen("AutomaticAnsTest.txt", "r", stdin);
	#endif
	int tc, num = 0;
	 
	
	cin >> tc;
	while (tc--) {
		int formula = 0;
		int tensCol = 0;
		cin >> num;
		formula = ((num * 567) / 9 + 7492) * 235 / 47 - 498;
		tensCol = abs(formula / 10 % 10);
		cout << tensCol << endl;
	}
 	return 0;
}
