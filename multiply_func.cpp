#include <iostream>
#include <conio.h>

using namespace std;

// void Mult(float x, float y);

template <class NUMBER>
void Square(NUMBER x);

int main() {
//     int x, y, result;
//     cout<<"X: "; cin>>x;
//     cout<<"Y: "; cin>>y;

//    Mult(x, y);

    int n;
    cout<<"Enter a num: "; cin>>n;
    Square(n);


    getch();
    return 0;
}

template <class NUMBER>
void Square(NUMBER x){
    cout<<x * x;
}

// void Mult(float x, float y) {
//     float result = x * y;
//     cout<<"Result: "<<result;
// }