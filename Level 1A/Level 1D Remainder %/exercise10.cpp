#include <iostream>
using namespace std;
/*
  This is important because you will use % a lot with conditions and loops.

Exercise 10

Ask the user for a number.

Print the remainder when that number is divided by 2.

Example:

Enter a number: 17

Output:

Remainder: 1
*/
 int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Remainder: " << number % 2 << endl;

    return 0;
 }