/*
Product of digits

Given a three-digit positive integer n. Find the product of its digits.

Input
One three-digit positive integer n.

Output
Print the product of the digits of n.

Examples
Example 1

Input
235
Output
30
80K*/

#include <iostream>
using namespace std;
 int main() {
    int n;
    cin >> n;

    int firstDigit = n/100;
    int middleDigit = (n/10) % 10;
    int lastDigit = n % 10;

    cout << firstDigit * middleDigit * lastDigit << endl;
 }