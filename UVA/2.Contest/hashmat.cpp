#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
		freopen("hashmat.txt", "r", stdin);
	#endif

	long hashTeam, enemyTeam;
	while (cin >> hashTeam >> enemyTeam) {
		// cout << hashTeam << " - " << enemyTeam << " after input" << endl;
		long diff = abs(enemyTeam - hashTeam);
		// cout << hashTeam << " - " << enemyTeam << " dif" << endl;
		cout << diff << endl;
	}
	return 0;
}
