/*
Print the given three-digit number without the middle digit.

Input
One three-digit integer.

Output
Print the given three-digit number without the middle digit.

Examples
Example 1

Input
198
Output
18
*/

#include <iostream>
using namespace std;

int main() {
   
   int n;
   cin >> n;

   int firstDigit = n / 100;
   int lastDigit = n % 10;

   cout << firstDigit << lastDigit << endl;

}
