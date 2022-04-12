#include<iostream>

using namespace std;

int main(){
    /*
    float a,b,c,d,e,f, result = 0;

    cout<<"Value of a: "; cin>>a;
    cout<<"Value of b: "; cin>>b;
    cout<<"Value of c: "; cin>>c;
    cout<<"Value of d: "; cin>>d;
    cout<<"Value of e: "; cin>>e;
    cout<<"Value of f: "; cin>>f;

    result = (a+(b/c)) / (d+(e/f));

    // This cout.precision is interesting cause it limits the amount of characters, not just the decimals
    cout.precision(2);
    cout<<"The result of the expresion\n";
    cout<<"(a+(b/c) / d+(e/f)) is:\n"<<result;
    */

    float a,b,c,d, result = 0;

    cout<<"a value: "; cin>>a;
    cout<<"b value: "; cin>>b;
    cout<<"c value: "; cin>>c;
    cout<<"d value: "; cin>>d;

    result = a + (b / (c-d));

    cout.precision(3);
    cout<<"The result of a + (b / (c-d)) is:\n"<<result;

    return 0;
}