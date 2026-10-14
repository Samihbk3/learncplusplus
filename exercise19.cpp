#include <iostream>
using namespace std;
int main(){

    int age;
    bool student;

    cin >> age >> boolalpha >> student; //boolaplha lets you write true or false

    if ( (age >= 18) && (student) ) {
        cout << "you can enter" << endl;
    } else {
        cout << "you can not enter" << endl;
    }
}