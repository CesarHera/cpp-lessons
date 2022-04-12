#include <iostream>

using namespace std;

int main(){
    float number, age = 18;

    cout<<"Guess the age: "; cin>>number;

    if(number == age){
        cout<<"You're right!";
    } else if(number < age){
        cout<<"Type a higher number";
    } else if(number > age){
        cout<<"Type a lower number";
    } else {
        cout<<"How the fuck did you get here?";
    }
    

    return 0;
}