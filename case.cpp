#include <iostream>

using namespace std;

int main(){
    int number;
    
    cout<<"Type a number: "; cin>>number;

    switch(number) { //you can't use floats
        case 10: cout<<"Your number is 10"; break;
        case 5: cout<<"Your number is 5"; break;
        case 24: cout<<"Your number is 24"; break;
        default: cout<<"I don't know your number"; break;
    }


    return 0;
}