#include <iostream>
using namespace std;

int main() {
    int n;
    n = 53190;

    int firstDigit = n /10000 % 10;
    int middleDigit = (n/100) % 10;
    int lastDigit = n % 10;

    cout << "mid digit " << middleDigit << endl << "first digit " << firstDigit << endl << "last digit " << lastDigit  << endl;
}