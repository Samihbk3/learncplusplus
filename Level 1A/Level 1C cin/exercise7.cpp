#include <iostream>
using namespace std;
/*Now we stop hard-coding the numbers.

Exercise 7

Ask the user for their age.

Example:

Enter your age: 27

Then print:

You are 27 years old.
*/
int main() {
    int age;
    
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old." << endl;

    return 0;


}