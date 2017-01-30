#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	int crimeArr[n];

	int nOfficers = 0;
	int nRogueCases = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> crimeArr[i];
		if (crimeArr[i] == -1 && nOfficers < 1) {
			nRogueCases++;
		}
		else if (crimeArr[i] == -1 && nOfficers > 0) {
			nOfficers--;
		}
		else {
			nOfficers += crimeArr[i];
		}
	}

	cout << nRogueCases << endl;
}
