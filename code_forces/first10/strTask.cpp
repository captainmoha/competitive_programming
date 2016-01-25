/*http://codeforces.com/problemset/problem/118/A*/

#include <iostream>
// #include <stdio.h>

using namespace std;

int main() {

	// freopen("strTask.in", "r", stdin);
	// freopen("strTask.out", "w", stdout);
	
	char vowls[] = {'A', 'O', 'Y', 'E', 'U', 'I'};
	
	string in, out;
	cin >> in;
	for (char c : in) {
		bool isVowel = false;
		string temp = ".";
		// cout << c << " ";
		for (char v : vowls)  {
			isVowel = (c == v || c - ' ' == v);
			if (isVowel) {
				break;
			}
		}

		if (isVowel) {
			continue;
		}
		else {
			if (c >= 'A' && c <= 'Z') {
				temp += char(c + ' ');
			}

			else {
				temp += c;
			}
		}
		
		out += temp;
	
	}

	cout << out << endl;
	

	return 0;
}
