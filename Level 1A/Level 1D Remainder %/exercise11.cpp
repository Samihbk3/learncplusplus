#include <iostream>
using namespace std;

/*
Exercise 11

Ask for two integers and print the remainder of the first number divided by the second.

Example:

Enter first number: 17
Enter second number: 5

Output:

Remainder: 2 */
 int main() {

    int firstNumber;
    int secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;
    
    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "Remainder: " << firstNumber % secondNumber << endl;
    return 0;
 }