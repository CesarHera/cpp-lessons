#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a,b, hypotenuse;

    cout<<"a leg legnth: "; cin>>a;
    cout<<"b leg legnth: "; cin>>b;

    // exponente = pow

    hypotenuse = sqrt(pow(a, 2)+pow(b, 2));

    cout<<"Hypotenuse: "<<hypotenuse;
    return 0;
}