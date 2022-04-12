#include <iostream>

using namespace std;

int main() {
    /*
    int age;

    cout<<"Enter your age: "; cin>>age;

    if (age>=18 && age<=25) {
        cout<<"You can pass to Oracle :)";
    } else {
        cout<<"Fuck off";
    }
    */

    int a,b,c,d;

    cout<<"a value: "; cin>>a;
    cout<<"b value: "; cin>>b;
    cout<<"c value: "; cin>>c;
    cout<<"d value: "; cin>>d;

    if (d==a || d==b || d==c) {
        cout<<"There's a coincidence";
    } else {
        cout<<"There's no coincidence";
    }

    return 0;
}