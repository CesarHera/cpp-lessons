#include <iostream> //Allows to input and output data, streams
#include <conio.h>

using namespace std; //Allows to use variables declarated inside std namespace

// void Vec_sum();

int vec[] = {11, 10, 40, 50}, vec_length = 4; //Any scope can access to this global variables

void Asc_sorted();

int main() {
    // Vec_sum();
    Asc_sorted();

    getch();
    return 0;
}

// void Vec_sum() {
//     int total = 0;
//     for(int i = 0; i < vec_length; i++) {
//         total += vec[i];
//     }
//     cout<<"Total: "<<total;
// }

void Asc_sorted() {
    bool ascendent = true;
    for(int i = 0; i < vec_length - 1; i++) {
        if(vec[i] > vec[i + 1]) {
            ascendent = false;
        }
    }
    if(ascendent == true) {
        cout<<"Is sorted ascendantly";
    } else {
        cout<<"Is not sorted ascendantly";
    }
}