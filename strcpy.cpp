#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    char city[20], citycpy[20];

    cout<<"Whats your citys name?: "; cin.getline(city, 20, '\n');
    strcpy(citycpy, city);
    cout<<citycpy;


    return 0;
}