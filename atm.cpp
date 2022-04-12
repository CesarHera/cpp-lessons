#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // float balance = 1000;
    // int option;

    // cout<<"\tWelcome to Oracle ATM!\n";
    // cout<<"Your balance is: "<<balance;
    // cout<<"\n1. Withdraw money:\n";
    // cout<<"2. Deposit money:\n";
    // cout<<"3. Exit:\n";
    // cout<<"Choose an option: "; cin>>option;

    // switch (option)
    // {
    // case 1:
    //     float withdraw;

    //     cout<<"How much do you want to withdraw?: "; cin>>withdraw;
    //     if((balance-withdraw) >= 0) {
    //         balance -= withdraw;
    //     } else {
    //         cout<<"You don't have enough funds";
    //         break;
    //     }
    //     cout<<"Witdrawed money: "<<withdraw;
    //     cout<<"\nNew balance: "<<balance;
    //     break;
    // case 2:
    //     float deposit;

    //     cout<<"How much money do you want to deposit?: "; cin>>deposit;
    //     cout<<"Deposited money: "<<deposit;
    //     balance += deposit;
    //     cout<<"\nNew balance: "<<balance;
    //     break;
    // case 3:
    //     cout<<"Have an excellent day";
    //     break;

    // default:
    //     cout<<"Choose a correct option please";
    //     break;
    // }


    int option;
    
    cout<<"\tWelcome to math friend!\n";
    cout<<"1. Square\n";
    cout<<"2. Even or Odd\n";
    cout<<"3. Exit\n";
    cout<<"\tChoose an option: "; cin>>option;

    int number;
    switch(option) {
        case 1:
            cout<<"Enter a number: "; cin>>number;
            cout<<"Number^2: "<<pow(number, 2);
            break;
        case 2:
            cout<<"Enter a number: "; cin>>number;
            if((number % 2) == 0) {
                cout<<number<<" It's even";
            } else {
                cout<<number<<" It's odd";
            }
            break;
        case 3:
            cout<<"Goodbye friend!";
            break;

        default:
            cout<<"Choose a correct option please";
            break;
    }


    return 0;
}