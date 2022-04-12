#include <iostream>

using namespace std;

int main(){
    float a,b,c;

    cout<<"a value: "; cin>>a;
    cout<<"b value: "; cin>>b;
    cout<<"c value: "; cin>>c;

    if(a==b && a==c) {
        cout<<"All three are the same";
    } else if(a>b && a>c) {
        cout<<"The greater is: "<<a;
    } else if(b>a && b>c) {
        cout<<"The greater is: "<<b;
    } else if(c>a && c>b) {
        cout<<"The greater is: "<<c;
    }

    return 0;
}