#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("searchingForNessy.txt", "r", stdin);
	#endif

	int tc;
	cin >> tc;

	while (tc--) {
		int length, width;
		cin >> length >> width;
		int sonarBeams = ((length / 3) * (width / 3));
		
		cout << sonarBeams << endl;
	}
	return 0; 
