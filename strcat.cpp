#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    // char name[10] = "Pepe", last_name[20] = " Escobar", full_name[30];

    // strcpy(full_name, name);
    // strcat(full_name, last_name);

    // cout<<full_name;



    char greeting[] = "Hello ", name[20];


    cout<<"Enter your name: "; cin.getline(name, 20, '\n');
    strcat(greeting, name);

    cout<<greeting;


    getch();
    return 0;
}