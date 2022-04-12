#include <iostream>
#include <conio.h>

using namespace std;

float findMax(float x, float y);

int main() {
    float x1, y1;
    cout<<"X: "; cin>>x1;
    cout<<"Y: "; cin>>y1;

    cout<<"Largest: "<<findMax(x1, y1);

    getch();
    return 0;
};

float findMax(float x, float y) {
    float max;
    if(x > y) {
        max = x;
    } else if(x < y) {
        max = y;
    }
    return max;
};
