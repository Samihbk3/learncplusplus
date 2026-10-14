#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    
    cout << (age < 18 || age > 60 
             ? "you are eligible for a discount" 
             : "you are not eligible for a discount");
}