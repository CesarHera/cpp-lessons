#include<iostream>

using namespace std;

int main(){
    /*
    float a, b, result = 0;

    cout<<"Enter the value of A: "; cin>>a;
    cout<<"Enter the value of B: "; cin>>b;

    result = (a / b) + 1;

    cout.precision(3);
    cout<<"The result of the expresion (A/B) + 1 is:\n"<<result;
    */

    float a,b,c,d, result = 0;

    cout<<"Enter the value of a: ";cin>>a;
    cout<<"Enter the value of b: ";cin>>b;
    cout<<"Enter the value of c: ";cin>>c;
    cout<<"Enter the value of d: ";cin>>d;

    result = (a+b) / (c+d);

    cout<<"The result of (a+b) / (c+d) is:\n"<<result;

    return 0;
}