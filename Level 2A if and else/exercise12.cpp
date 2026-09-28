#include <iostream>
using namespace std;
/* Exercise 12

Ask the user for their age.

If they are 18 or older, print:

You are an adult.

Otherwise:

You are not an adult. */
 
int main() {

    int age;

    cout << "Enter your age: ";
    cin >> age;

     if ( age >= 18) {
        cout << "You are an adult." << endl;
     } 

     else {
        cout << "You are not an adult." << endl;
     }
}