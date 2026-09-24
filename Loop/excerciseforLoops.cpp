#include <iostream>
using namespace std;

int main() {

    int pin = 1234;
    int guess;
    int tries = 0;

    while (tries < 3) {

        cout << "Enter your PIN: ";
        cin >> guess;

        if (guess == pin) {
            cout << "PIN correct. Access granted!" << endl;
            break;
        } 
        else {
            cout << "Wrong PIN." << endl;
        }

        tries++;
    }

    if (tries == 3 && guess != pin) {
        cout << "Too many attempts. Your account is locked." << endl;
    }

    return 0;
}