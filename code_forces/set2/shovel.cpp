#include <iostream>

using namespace std;


int main() {
   	
   	int price, r;
   	cin >> price >> r;

   	int nShovels = 1;

   	while ((nShovels*price)%10 != r && (nShovels*price)%10 != 0) {
   	 	nShovels++;
   	}

   	cout << nShovels << endl;
    
    return 0;
}
