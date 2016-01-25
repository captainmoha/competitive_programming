#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	freopen("vla.in", "r", stdin);
	freopen("vla.out", "w", stdout);
	
	short n;
	cin >> n;
	(n%2) == 0 ? (cout << "Yes") : (cout << "NO");
	return 0;
}