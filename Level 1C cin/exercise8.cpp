#include <iostream>
using namespace std;
/*
Exercise 8

Ask the user for two numbers.

Example:

Enter first number: 10
Enter second number: 5

Print their:

* sum
* difference
* multiplication
* division

*/
 int main() {
    int firstNumber;
    int secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "sum: " << firstNumber + secondNumber << endl;
    cout << "diffirence: " << firstNumber - secondNumber << endl;
    cout << "multiplication: " << firstNumber * secondNumber << endl;
    cout << "division: " << firstNumber / secondNumber << endl;


 }