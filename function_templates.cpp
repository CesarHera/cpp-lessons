#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

template <class NUMBER>
void Abs(NUMBER x);

int main() {    
    Abs(.20);
    Abs(-20);
    Abs(122222220);
    Abs(-.2144);

    getch();
    return 0;
}

template <class NUMBER>
void Abs(NUMBER x) {
    cout<<"\n"<<sqrt(pow(x, 2));
}
