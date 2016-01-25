/*http://codeforces.com/problemset/problem/71/A*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

	freopen("longWords.in", "r", stdin);
	freopen("longWords.out", "w", stdout);
	
	short tc;
	cin >> tc;
	
	while (tc--) {
		string s;
		cin >> s;
		short len = s.length();
		len <= 10 ? (cout << s << endl) : cout << s[0] << len-2 << s[len-1] << endl;  
	}
	return 0;
}