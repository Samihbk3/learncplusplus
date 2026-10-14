/*
The square of the sum
Find the square of the sum of the digits of a two-digit positive integer.

Input
One two-digit positive integer n.

Output
Print the square of the sum of the digits of the number n.

Examples
Example 1

Input
23
Output
25
*/


#include <iostream>
using namespace std;

int main() {

 int n;
 cin >> n;

  int firstDigit = n/10;
  int secondDigit = n % 10;

 int sum = firstDigit + secondDigit;

 cout << sum * sum << endl;

}
