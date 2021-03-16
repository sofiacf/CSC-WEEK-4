// Calculate the sum of the integers from 1 to 100
#include <iostream>
using namespace std;

int main() {
   unsigned int sum{0};
   unsigned int x{1};

   while (x <= 100) { // while x is less than or equal to 100
      sum += x; // add x to sum
      ++x; // increment x
   } 

   cout << "The sum is: " << sum << endl;
}
