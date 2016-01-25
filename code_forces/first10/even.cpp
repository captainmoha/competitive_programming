/*http://codeforces.com/problemset/problem/4/A*/

#include <iostream>

using namespace std;

int main() {

	short n;
	cin >> n;
	(n%2 == 0) && (n > 2) ? (cout << "YES") : (cout << "NO");

	return 0;
}