#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    // int numbers[5];

    // for(int i = 0; i < 5; i++){
    //     cout<<"Enter a number: "; cin>>numbers[i];

    // }
    // for(int i = 0; i < 5; i++){
    //     cout<<"index "<<i<<": "<<numbers[i]<<endl;
    // }

    // system("pause");

    int numbers[10];

    for(int i = 0; i < 10; i++){
        cout<<"Enter a number: "; cin>>numbers[i];
    }
    for(int i = 9; i >= 0; i--){
        cout<<numbers[i]<<endl;
    }

    system("pause");


    return 0;
}