#include <iostream>
#include <cmath>

using namespace std;

int main(){
    /*
    float x, y, result;

    cout<<"x value: "; cin>>x;
    cout<<"y value: "; cin>>y;

    result = (sqrt(x)) / ((pow(y, 2) - 1));

    cout<<"The result of x^0.5 / y^2 - 1 is:\n"<<result;
    */

   float a,b,c,x1,x2;

   cout<<"a value is: "; cin>>a;
   cout<<"b value is: "; cin>>b;
   cout<<"c value is: "; cin>>c;

   x1 = (-b+sqrt(pow(b, 2) - (4*a*c)))/2*a;
   x2 = (-b-sqrt(pow(b, 2) - (4*a*c)))/2*a;

   cout<<"The results are:\nx1: "<<x1<<"\nx2:"<<x2;

    return 0;
}