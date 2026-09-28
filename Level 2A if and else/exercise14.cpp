#include <iostream>
using namespace std;
/*
Exercise 14

Ask for a number.

Determine whether it is:

* positive
* negative
* zero

Example:

Enter a number: -5

Output:

Negative
*/
 int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {

        cout << "Positive" << endl;
    }
    else if (number < 0) {

        cout << "Negative" << endl;
    } else {

        cout << "zero" << endl;
    }

    return 0;
 }