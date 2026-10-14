/*

⸻

Level 3B, Loops + Arithmetic

Exercise 25

Print the first 10 multiples of 5.

Expected:

5
10
15
20
25
30
35
40
45
50  */
#include <iostream>
using namespace std;
//START → CHECK → DO → CHANGE → CHECK → DO → CHANGE
int main() {
    for (int i = 10; i >= 0; i = i - 1) {
        cout << i << endl;
    }
}