#include <iostream> 
#include <stdio.h>

using namespace std;

void bubbleSort(int* arr, int lenArray);


int main(){

	#ifndef ONLINE_JUDGE
		freopen("costCuttingTest.txt", "r", stdin);
	#endif
	int tc;
	int counter = 1;
	cin >> tc;
	while (tc--) {
		int surviVar;
		int nEmp = 3;
		int emp[nEmp];

		for(int i = 0; i < nEmp; i++){
			cin >> emp[i];
		}
		bubbleSort(emp, nEmp);
		
		cout <<"Case " << counter << ": "<< emp[1] << endl;
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