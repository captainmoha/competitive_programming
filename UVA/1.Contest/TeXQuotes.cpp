#include <iostream> 
#include <stdio.h>


using namespace std;

int main() {
	string rightQ = "''";
	string leftQ = "``";
	const char  doubleQ = '"';
	bool isRight = false;

	#ifndef ONLINE_JUDGE
		freopen("TeXQuotesTest.txt", "r", stdin);
	#endif

	string s;
	char c;
	while((c = getchar()) != EOF) {

		if(isRight && c == doubleQ) {
			s += rightQ;
			isRight = false; 
		}

		else if (!isRight && c == doubleQ) {
			s += leftQ;
			isRight = true;
		}
		else {
			s += c;
		}
		
	}
	cout << s;
 	return 0;
}
