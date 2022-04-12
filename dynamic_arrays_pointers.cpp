#include <iostream>
#include <stdlib.h>

using namespace std;


int* Fill_data(int *pointer); // Type an * after the return type of the function to return pointers

void Show_data(int *pointer); // * after the variable name to indicate that parameter is a pointer

int main() {
    // Show_data(Fill_data());
    int *pointer;
    Show_data( Fill_data(pointer) );


    cout<<endl;
    system("pause");
    return 0;
}


int* Fill_data(int *pointer) { // Type an * after the return type of the function to return pointers
    // int len;
    // cout<<"How many numbers?: "; cin>>len;

    pointer = new int[5];

    for(int i = 0; i < 5; i++) {
        cin>>pointer[i]; //This is not an iterator, can not use ++ to iterate the array, this is actually, an array since we used "new".
    }

    return pointer;
}

void Show_data(int *pointer) {
    for(int i = 0; i < 5; i++) {
        cout<<pointer[i]<<endl;
    }
    delete[] pointer;
}