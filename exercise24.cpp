/* Exercise 24
Ask the user for a number.
Print from 1 to that number.

Example:

Enter a number: 5

Output:
1
2
3
4
5 */
#include <iostream>
using namespace std;
 int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }


 }