#include <iostream>
using namespace std;

 int main() {

    int savings;
    cin>>savings;

    if (savings>500) {

        if (savings>600) {
            cout<<"I will buy BMW" <<endl;
        } else {
            cout<<"i will buy byd" <<endl;
        }
    } else if (savings>200) {
        cout<< "I will buy motorbike" <<endl;
    } else {
        cout<< "i will be go with taxi" <<endl;
    }

    return 0;
 }