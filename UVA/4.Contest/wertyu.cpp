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
		freopen("wertyu.in", "r", stdin);
		freopen("wertyu.out", "w", stdout);
	#endif

	
	mcc querty;
	// NUMBERS
	querty['1'] = '`';
	querty['2'] = '1';
	querty['3'] = '2';
	querty['4'] = '3';
	querty['5'] = '4';
	querty['6'] = '5';
	querty['7'] = '6';
	querty['8'] = '7';
	querty['9'] = '8';
	querty['0'] = '9';
	querty['-'] = '0';
	querty['='] = '-';

	// FIRST ROW
	querty['W'] = 'Q';
	querty['E'] = 'W';
	querty['R'] = 'E';
	querty['T'] = 'R';
	querty['Y'] = 'T';
	querty['U'] = 'Y';
	querty['I'] = 'U';
	querty['O'] = 'I';
	querty['P'] = 'O';
	querty['['] = 'P';
	querty[']'] = '[';
	querty['\\'] = ']';

	// SECOND ROW
	querty['S'] = 'A';
	querty['D'] = 'S';
	querty['F'] = 'D';
	querty['G'] = 'F';
	querty['H'] = 'G';
	querty['J'] = 'H';
	querty['K'] = 'J';
	querty['L'] = 'K';
	querty[';'] = 'L';
	querty['\''] = ';';

	// THIRD ROW
	querty['X'] = 'Z';
	querty['C'] = 'X';
	querty['V'] = 'C';
	querty['B'] = 'V';
	querty['N'] = 'B';
	querty['M'] = 'N';
	querty[','] = 'M';
	querty['.'] = ',';
	querty['/'] = '.';
	querty[' '] = ' ';

	string input;
	while (getline(cin, input)) {
		string output = "";

		for (int c = 0; c < input.length(); c++) {
			mccIter it = querty.find(input[c]);
			
			if (it != querty.end()) {
				output += it->second;
			}
			else {
				output += input[c];
			}
		}
		cout << output << endl;
	}
	

	return 0; 
}
