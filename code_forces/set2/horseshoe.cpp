#include <iostream>

using namespace std;


int main() {
   	
   	int shoesColors[4] = {0};

   	int nShoes = 0;
   	for (int i = 0; i < 4; i++) {
   		cin >> shoesColors[i];

   		for (int j = 0; j < i; j++) {
   			if (shoesColors[j] == shoesColors[i]) {
   				nShoes++;
   				break;
   			}
   		}
   	}

   	cout << nShoes << endl;
    
    return 0;
}
