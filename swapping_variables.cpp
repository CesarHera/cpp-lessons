#include <iostream>
#include <stdlib.h>

using namespace std;

void Swap_values(float *, float *);

int main() {
    float n1 = 123.123, n2 = 32.5342;
    
    Swap_values(&n1, &n2);

    cout<<n1<<endl<<n2;

    cout<<endl;
    system("pause");
    return 0;
}

void Swap_values(float *p1, float *p2) {
    cout<<p1<<endl;
    float aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}