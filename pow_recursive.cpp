#include <iostream>
#include <conio.h>

using namespace std;

// int PowRecursive(int x, int y);

int AscendentRecursive(int, int);

int main() {
    // cout<<PowRecursive(2, 5);

    AscendentRecursive(29, 33);

    getch();
    return 0;
}

// int PowRecursive(int x, int y) {
//     int product;
//     if(y == 1) {
//         product = x;
//     } else {
//         product = x * PowRecursive(x, y - 1);
//     }


//     return product;
// }

int AscendentRecursive(int a, int z) {
    int result;
    if(z == a) {
        result = z;
    } else {
        result = AscendentRecursive(a, z - 1) + 1;
    }

    cout<<result<<endl;
    return result;
}