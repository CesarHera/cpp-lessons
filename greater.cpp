#include <iostream>

using namespace std;

int main(){
    float a, b;

    cout<<"a value: "; cin>>a;
    cout<<"b value: "; cin>>b;
    
    if(a==b){
        cout<<"The numbers are equals";
    } else if(a < b) {
        cout<<"The greater is: "<<b;
    } else {
        cout<<"The greater is: "<<a;
    }

    return 0;
}