#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

typedef map<char, char> mcc;
typedef map<char, char>::iterator mccIter;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("soundex.in", "r", stdin);
		freopen("soundex.out", "w", stdout);
	#endif



	string input;
	mcc m;
	m['B'] = '1';
	m['F'] = '1';
	m['P'] = '1';
	m['V'] = '1';
	m['C'] = '2';
	m['G'] = '2';
	m['J'] = '2';
	m['K'] = '2';
	m['Q'] = '2';
	m['S'] = '2';
	m['X'] = '2';
	m['Z'] = '2';
	m['D'] = '3';
	m['T'] = '3';
	m['L'] = '4';
	m['M'] = '5';
	m['N'] = '5';
	m['R'] = '6';
	
	while (cin >> input) {
		

		// for (map<char, char>::iterator it = m.begin(); it != m.end(); it++) {
		// 		cout << it->first << " ";
		// 	}

		string soundex = "";
		for (int c = 0; c < input.length(); c++) {
			for (mccIter it = m.begin(); it != m.end(); it++) {
				char currentChar = input[c];
				char nextChar = input[c+1];

				if (input[c] == it->first && input[c] != input[c+1] && m.find(currentChar)->second != m.find(nextChar)->second) {
					soundex += it->second;
				}	
			}
		}

		cout << soundex << endl;
	}
	return 0; 
}
