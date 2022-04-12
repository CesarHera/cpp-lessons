#include <iostream>
#include <conio.h>

using namespace std;

// int Recursive_sum(int n);

int Recursive_fibonacci(int n);

int main() {
    // cout<<Recursive_sum(5);

    cout<<Recursive_fibonacci(6);
        

    getch();
    return 0;
}

// int Recursive_sum(int n) {
//     int suma;
//     if(n == 1) {
//         suma = 1;
//     } else {
//         suma = n + Recursive_sum(n - 1);
//     }
//     return suma;
// }

int Recursive_fibonacci(int n) {
    int sum;
    if(n == 1) {
        sum = 0;
    } else if(n == 2) {
        sum = 1;
    } else {
        sum = Recursive_fibonacci(n - 1) + Recursive_fibonacci(n - 2);
    }

    return sum;
}