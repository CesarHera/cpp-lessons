#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;


int main() {
    char name[] = "recconocer", namerev[20];
    strcpy(namerev, name);
    if(strcmp(name, strrev(namerev)) == 0) {
        cout<<"yeah";
    } else {
        cout<<"nope";
    }



    return 0;
}