#include <iostream>

using namespace std;

int gcd(int a, int b) {
   if (b == 0) {
      return a;
   }

   gcd(b, a%b);
}


int main() {
   int y, w;
   cin >> y >> w;

   int max = (y > w) ? y : w;

   int nWinWays = 0;
   for (int i = max; i <= 6; i++) {
      nWinWays++;
   }
   
  
   // to simplify the fraction we need to divide the nom and demom by gcd of both
   int gcdVal = gcd(nWinWays, 6);
   
   
   char A = (nWinWays / gcdVal) + '0';
   char B = (6 / gcdVal) + '0';

   string probability = "";
   probability += A;
   probability += '/';
   probability += B;

   cout << probability << endl;

   return 0;
}
