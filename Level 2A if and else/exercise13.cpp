#include <iostream>
using namespace std;
/*
Exercise 13

Ask for a number.

If the number is positive, print:

Positive

Otherwise, print:

Not positive 
*/
int main() {

  int number;

  cout << "Enter a number: ";
  cin >> number;

  if (number > 0 ) {
    cout << "Positive " << endl;
  } 
  else {
    cout << "Not positive" << endl;
  }

  return 0;
}