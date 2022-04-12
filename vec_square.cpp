#include <iostream>
#include <conio.h>

using namespace std;

void Square_vec(int vec[], int length);

template <class ANYT>
void Print_vec(ANYT vec[], int length);

int main() {
    const int LEN = 4;
    int vec[LEN] = {5, 50, 500, 5000};

    Square_vec(vec, LEN);
    Print_vec(vec, LEN);

    getch();
    return 0;
}

void Square_vec(int vec[], int length) {
    for(int i = 0; i < length; i++) {
        vec[i] *= vec[i];
    }
}

template <class ANYT>
void Print_vec(ANYT vec[], int length) {
    for(int i = 0; i < length; i++) {
        cout<<vec[i]<<endl;
    }
}