#include <iostream>

using namespace std;


int main() {
   	
   int nBags;
   
   int nWays = 0, sum = 0;

   cin >> nBags;
   int bags[nBags];
   
   for (int i = 0; i < nBags; i++) {
      cin >> bags[i]; 
      sum += bags[i];
   }

   for (int i = 0; i < nBags; i++) {
      int sumAfter = sum - bags[i];
      if (sumAfter % 2 == 0) {
         nWays++;
      }
   }
   cout << nWays << endl;
   return 0;
}
