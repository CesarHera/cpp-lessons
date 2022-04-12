#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char name[100];

    cout<<"Enter your name: "; cin.getline(name, 100, '\n');

    if(strlen(name) > 10) {
        cout<<"More than 10";
    }


    return 0;
}