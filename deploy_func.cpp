#include <iostream>
#include <conio.h>

using namespace std;

// template <class TYPEA>
// void deploy(TYPEA x);

void Max(int x,int y,int z);

int main() {
    // int n = 12;
    // float f = 3432.12;
    // char l = 'n';
    // char p[] = "Hello";

    // deploy(n); 
    // deploy(f); 
    // deploy(l); 
    // deploy(p); 

    int x, y, z;
    cout<<"Enter 3 numbers: "; cin>>x>>y>>z;
    Max(x, y, z);




    getch();
    return 0;
}

// template <class TYPEA>
// void deploy(TYPEA x){
//     cout<<"Your value: "<<x<<endl;
// }

void Max(int x,int y,int z){
    int a_max, values[] = {x, y, z};
    for(int i = 0; i < 3; i++){
        if(i == 0) {
            a_max = values[i];
        } else if(values[i] > a_max) {
            a_max = values[i];
        }
    }
    cout<<"Maximun value: "<<a_max;
}