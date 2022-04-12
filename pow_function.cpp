#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

// void funpot(int x, int y);

void Fracc(float x);

int main() {
    // funpot(2, 10);
    float x;
    cout<<"Enter a number: "; cin>>x;

    Fracc(x);


    getch();
    return 0;
}

// void funpot(int x, int y) {
//     cout<<pow(x, y);
// }

void Fracc(float x) {
    int y = x;

    cout<<x - y;
}
