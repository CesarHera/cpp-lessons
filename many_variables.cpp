#include <iostream>
#include <stdlib.h>

using namespace std;

void Sum_mult(int n1, int n2, int&, int&);

int main() {
    int n1, n2, sum = 0, product = 0;
    cout<<"Enter 2 numbers: "; cin>>n1>>n2;

    Sum_mult(n1, n2, sum, product);

    cout<<sum<<endl<<product<<endl;

    system("pause");
    return 0;
}

void Sum_mult(int n1, int n2, int& sum, int& product) {
    sum = n1 + n2;
    product = n1 * n2;
}