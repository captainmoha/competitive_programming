#include <iostream>

using namespace std;


int main() {
   	
   string input, instructions;
   cin >> input >> instructions;

   int pos = 0;
   for (int i = 0; i < instructions.length(); i++) {
      if (instructions[i] == input[pos] && pos < input.length()-1)
         pos++;
   }

   cout << pos+1 << endl;
   return 0;
}
