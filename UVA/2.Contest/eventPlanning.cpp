#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("eventPlanning.in", "r", stdin);
		freopen("eventPlanning.out", "w", stdout);
	#endif
	int nParticipant, budget, nHotel, nWeeks;
	while(cin >> nParticipant >> budget >> nHotel >> nWeeks) {
		int minCost = 2000000000;
		while (nHotel--) {
			int pricePerCapita;
			cin >> pricePerCapita;
			for (int i = 0; i < nWeeks; i++) {
				int availableBeds;
				cin >> availableBeds;
				int weekBudget = pricePerCapita * nParticipant;

				if (availableBeds < nParticipant) {
					continue;
				}
				
				else if (weekBudget < minCost) {
					minCost = weekBudget;
				}
				// cout << "Week " << i + 1 << "budget = " << weekBudget << endl;
			}
		}

		if (minCost <= budget) {
			cout << minCost << endl;
		}
		else {
			cout << "stay home" << endl;
		}
	}
	
	return 0; 
}
