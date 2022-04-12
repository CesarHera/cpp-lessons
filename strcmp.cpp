#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    // char name[] = "Elpepe", name2[] = "elpepe";

    // if(strcmp(name, name2) == 0){
    //     cout<<"Those strings are the same :)";
    // } else {
    //     cout<<"Different strings :)";
    // }


    char email[20], email2[20];

    cout<<"Enter your email: "; cin.getline(email, 20, '\n');
    cout<<"Enter your email again: "; cin.getline(email2, 20, '\n');

    if(strcmp(email, email2) == 0) {
        cout<<"Same email :)";
    } else {
        if(strlen(email) == strlen(email2)) {
            cout<<"Same length";
        } else if(strlen(email) > strlen(email2)) {
            cout<<email<<" is bigger";
        } else {
            cout<<email2<<" is bigger";
        }
    }

    getch();
    return 0;   
}