#include <iostream>

using namespace std;

int main(){
    /*
    int number;
    cout<<"Type your number: "; cin>>number;

    if(number % 2 == 0) {
        cout<<"It's even";
    } else {
        cout<<"It's odd";
    }
    */

    int number;
    cout<<"Type a number: "; cin>>number;

    if (number == 0) {
        cout<<"Your number is zero";
    } else if (number < 0) {
        cout<<"Your number is negative";
    } else {    
        cout<<"Your number is positive";
    }

    return 0;
}