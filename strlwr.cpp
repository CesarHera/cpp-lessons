#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    // char name[] = "CESSAR";

    // strlwr(name);
    // cout<<name;

    char name[20];

    cout<<"Enter your name in uppercase: "; cin.getline(name, 20, '\n');

    if(name[0] == 'A') {
        strlwr(name);
        cout<<name;
    } else {
        cout<<name;
    }



    getch();
    return 0;
}