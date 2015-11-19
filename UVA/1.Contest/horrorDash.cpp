#include <iostream> 
#include <stdio.h>

using namespace std;

void bubbleSort(int* arr, int lenArray);

int main(){

	#ifndef ONLINE_JUDGE
		freopen("horrorDashTest.txt", "r", stdin);
	#endif
	int tc;
	int counter = 1;
	cin >> tc;
	while (tc--) {
		int nCreatures;
		cin >> nCreatures;
		int creatures[nCreatures];
		
		for(int i = 0; i < nCreatures; i++){
			cin >> creatures[i];
		}
		bubbleSort(creatures, nCreatures);
		
		cout <<"Case " << counter << ": "<< creatures[nCreatures-1] << endl;
		counter++;		
	}
	return 0;
}

void bubbleSort(int* arr, int lenArray)
{	
	
	int temp;

	// go through each element in the array
	for (int i = 0; i < lenArray; i++) {

		// in each iteration go through each element in the array except for the last elment
		for (int j = 0; j < lenArray - i - 1; j++) {

			// if what's on the left is bigger than what's on the right
			if (arr[j] > arr[j + 1]) {
				// swap them
				swap(arr[j], arr[j + 1]);	
			}
				
		}
	}
}