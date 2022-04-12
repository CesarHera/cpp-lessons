#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // int number, factorial = 1;

    // cout<<"Enter a integer number: "; cin>>number;
    // for(int i = number; i > 0; i--) {
    //     factorial *= i;
    // }
    // cout<<"Total: "<<factorial<<endl;

    // system("pause");


    int number, sum;

    cout<<"Enter an integer number: "; cin>>number;
    for(int i = 1; i <= number; i++) {
        int factorial = 1;
        for(int j = i; j > 0; j--) {
            factorial *= j;
        }
        sum += factorial;
    }

    cout<<"Factorial sum: "<<sum<<endl;
    system("pause");

    return 0;
}