#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("jollyJumbers.txt", "r", stdin);
	#endif

	int n;
	bool jolly = false;
	while (cin >> n) {

		
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			// cout << arr[i] << " ";
		}


		int diff[n];
		// cout << "diff" << endl;
		for (int j = 0; j < n - 1; j++) {
			diff[j] = abs(arr[j] - arr[j+1]);
			// cout << diff[j] << " ";
		}

		// there is only one element it's jolly
		if (n == 1) {
			jolly = true;
		}

		// if therea are two elements and the difference between them is one it's jolly 
		else if (n == 2) {
			if (diff[0] == 1) {
				jolly = true;
			}
			else {
				jolly = false;
			}
			
		}

		// if there are more than 2 elements
		else {
			// sort the differance array to make sure that elments have the sequence from 1 to n-1
			sort(diff, diff + (n - 1));

			// if the first element is 1, That's a good start but we need to make sure that the rest follow the rule
			if (diff[0] == 1) {
				// go through the sorted diff array
				for (int k = 1; k < n - 1; k++) {

					// if the successive elements follow the rule 
					if (diff[k] - diff[k - 1] == 1) {
						jolly = true;
					}

					// if they are the same
					else if (diff[k] - diff[k - 1] == 0) {
						// move along nothing to do here!
						continue;
					}

					else {
						// if one element breaks the rule then get the frack outta my loop!
						jolly = false;
						break;
					}
				}
			}

			// if the first element is not 1. that's crazy talk and the sequence is not jolly at all!
			else {
				jolly = false;
			}
		}
		
		if (jolly) {
			cout << "Jolly" << endl;
		}
		else {
			cout << "Not jolly" << endl;
		}

		// cout << endl << endl << """"""""""""""""""""""""""""""""<< endl;
	}

	
	
	return 0; 
}