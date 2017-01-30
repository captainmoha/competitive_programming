#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string word;
	cin >> word;
	
	int nRotations = 0;
	int rot1, rot2;
	char init = 'a';

	for (int i = 0, len = word.size(); i < len; i++) {
		
		if (init > word[i]) {
			rot1 = (word[i] - init + 25 + 1);
			rot2 = init - word[i];
		} 
		else if (init < word[i]) {
			rot1 = (init - word[i] + 25 + 1);
			rot2 = word[i] - init;
			
		}
		else {
			rot1 = 0;
			rot2 = 0;
		}

		nRotations += (rot1 < rot2) ? rot1 : rot2;
		
		// cout << word[i] << endl;
		// cout << "1: " << rot1 << " 2: " << rot2 <<  endl;
		init = word[i];
	}

	cout << nRotations << endl;
}
