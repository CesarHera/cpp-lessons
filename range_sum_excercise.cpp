#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // int number, sum;

    // cout<<"Enter an integer number: "; cin>>number;
    // for(int i = 1; i <= number; i++) {
    //     sum += i;
    // }
    // cout<<"Sum: "<<sum<<endl;


    // system("pause");

    int number, sum;

    cout<<"Enter an integer number: "; cin>>number;
    for(int i = 1; i <= number; i++) {
        sum += 2*i-1;
    }
    cout<<"Sum: "<<sum;

    return 0;
}