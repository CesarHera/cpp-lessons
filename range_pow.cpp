#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main() {    
    // int number, sum;

    // cout<<"Enter an integer number: "; cin>>number;
    // for(int i = 1; i <= number; i++) {
    //     sum += pow(2, i);
    // }
    // cout<<"Sum: "<<sum<<endl;

    // system("pause");


    int number, total;

    cout<<"Enter an integer number: "; cin>>number;
    for(int i = 1; i <= number; i++) {
        if(i % 2 == 0) {
            total -= i;
        } else {
            total += i;
        }
    }

    cout<<"Total: "<<total<<endl;
    system("pause");
    return 0;
}