#include <iostream>
#include <stdlib.h>

using namespace std;

// template <class ANYT>
// void swipe(ANYT&, ANYT&, ANYT&);

void Atm(int money, int&, int&, int&, int&, int&, int&);

int main() {
    // char letra = 'a', letra2 = 'u', aux;

    // swipe(letra, letra2, aux);
    // cout<<letra<<endl<<letra2<<endl;


    // float height = 34212.432, weight = 234.523, aux2;
    // swipe(height, weight, aux2);
    // cout<<height<<endl<<weight<<endl;

    int my_money, thousands = 0, hundreds = 0, fifties = 0, twenties = 0, tens = 0, ones = 0;
    cout<<"How much money do you want to exchange?: "; cin>>my_money;

    Atm(my_money, thousands, hundreds, fifties, twenties, tens, ones);

    cout<<endl;
    system("pause");
    return 0;
}

// template <class ANYT>
// void swipe(ANYT& a, ANYT& b, ANYT& aux) {
//     aux = a;
//     a = b;
//     b = aux;
// }

void Atm(int money, int& thousands, int& hundreds, int& fifties, int& twenties, int&tens, int&ones){
    if(money >= 1000){
        thousands = money / 1000;
        money %= 1000;
    }
    if(money >= 100) {
        hundreds = money / 100;
        money %= 100;
    }
    if(money >= 50) {
        fifties = money / 50;
        money %= 50;
    }
    if(money >= 20) {
        twenties = money / 20;
        money %= 20;
    }
    if(money >= 10) {
        tens = money / 10;
        money %= 10;
    }
    if(money >= 1) {
        ones = money / 1;
        money %= 1;
    }
    cout<<"Thousands: "<<thousands<<endl;
    cout<<"Hundreds: "<<hundreds<<endl;
    cout<<"Fifties: "<<fifties<<endl;
    cout<<"Twenties: "<<twenties<<endl;
    cout<<"Tens: "<<tens<<endl;
    cout<<"Ones: "<<ones<<endl;
}