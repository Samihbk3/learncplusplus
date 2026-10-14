#include <iostream>
using namespace std;

int main() {

    int n;
    int sumeve = 0;
    int oddCount = 0;
    cin >> n;

    while (n != 0) {
        if (n % 2 == 0) {
            sumeve = sumeve + n;
        } else {
            oddCount += 1;
        }
        cin >> n;
    }

    cout << "even sum:  " << sumeve << '\n';
    cout << "odd count: " << oddCount << '\n';





}