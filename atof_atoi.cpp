#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;


int main() {
    // char stringi[] = "213", stringf[] = "1.232";
    // int integer;
    // float floating;

    // integer = atoi(stringi);
    // cout<<integer + 20<<endl;

    // floating = atof(stringf);
    // cout<<floating + 20;

    char integer[20], real[20];

    cout<<"Enter an integer number: "; cin.getline(integer, 20, '\n');
    cout<<"Enter a real number: "; cin.getline(real, 20, '\n');

    int convertedi = atoi(integer);
    float convertedf = atof(real);

    cout<<"Sum: "<<convertedi + convertedf;

    return 0;
}