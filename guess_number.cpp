#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    // srand ( time(NULL) );
    // int random = rand() % 100 + 1, number, fails = 0;

    // cout<<random<<endl;
    // do {
    //     cout<<"\nGuess the number: "; cin>>number;
    //     if(number == random) {
    //         cout<<"\nYou won!";
    //         break;
    //     } else if(number < random) {
    //         cout<<"\nTry something bigger";
    //     } else {
    //         cout<<"\nTry something smaller";
    //     }
    //     fails += 1;
    // } while(number != random);
    
    // cout<<"\nFails: "<<fails;

    int number, divisor = 1;

    cout<<"Enter an integer number: "; cin>>number;

    do{
        if(divisor == 1) {
            cout<<divisor<<endl;
            divisor++;
        } else if(number % divisor == 0) {
            number /= divisor;
            cout<<divisor<<endl;
        } else {
            divisor++;
        }
    } while(divisor <= number);


    system("pause");



    return 0;    
}