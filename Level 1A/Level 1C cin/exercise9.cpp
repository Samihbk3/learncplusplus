#include <iostream>
using namespace std;
/*
Exercise 9

Ask for the user’s name and age.

Example:

Enter your name: Adnan
Enter your age: 27

Output:

Hello Adnan!
You are 27 years old.
*/
int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}