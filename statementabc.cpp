#include <iostream>
using namespace std;

int main() {
    //check which number is maximum
    int a,b,c;
    
    cin>>a>>b>>c;

    if (a>b) {
        if (a>c){
            cout<< "A is the biggest number:" <<a<<endl;
        } else 
        {
            cout<<" this is the biggest number:"<<c<<endl;
        }

    }


    return 0;
}