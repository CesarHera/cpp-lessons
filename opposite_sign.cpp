#include <iostream>
#include <stdlib.h>

using namespace std;

// void Opposite_sign(int vec[], int vec_len);

void Odd_vec(int vec[]); // it seems not to be necessary the vec length as a variable

int main() {
    int vec[] = {-32, 24, -3421, -1, 1}, vec_len = 5;

    // Opposite_sign(vec, vec_len);

    Odd_vec(vec);

    cout<<endl;
    system("pause");
    return 0;
}

// void Opposite_sign(int vec[], int vec_len) {
//     for(int i = 0; i < vec_len; i++) {
//         vec[i] *= -1;
//         cout<<vec[i]<<endl;
//     }
// }

void Odd_vec(int vec[]) {
    for(int i = 0; i < 5; i++) {
        if(vec[i] % 2 != 0) {
            cout<<vec[i]<<endl;
        }
    }
}