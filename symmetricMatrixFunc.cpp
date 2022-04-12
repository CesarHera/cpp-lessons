#include <iostream>
#include <conio.h>

using namespace std;

// void Symmetric(int matrix[][3], int mRows, int mColumns);

void minValueRow(int matrix[][3], int targetRow);

int main() {
    
    const int mRows = 3, mColumns = 3;
    int matrixFachera[mRows][mColumns] = {{ 1, 2, 3 },
                                          { 2, 4, 5 },
                                          { 3, 0, 6 }};

    // Symmetric(matrixFachera, mRows, mColumns);

    int targetRow;
    cout<<"Enter a row 1:3 ->  "; cin>>targetRow;

    minValueRow(matrixFachera, targetRow);

    getch();
    return 0;
}

// void Symmetric(int matrix[][3], int mRows, int mColumns) {
//     if(mRows != mColumns) {
//         cout<<"Is not a square matrix";
//     } else {
//         bool symmetric = true;
//         for(int i = 0; i < mRows; i++) {
//             for(int j = 0; j < mColumns; j++) {
//                 if(matrix[i][j] != matrix[j][i]) {
//                     symmetric = false;
//                 }
//             }
//         }
//         if(symmetric == true) {
//             cout<<"Is symmetrical :D";
//         } else {
//             cout<<"Is not symmetrical :P";
//         }
//     }
// }

void minValueRow(int matrix[][3], int targetRow) {
    int min = 0;
    targetRow--;
    for(int i = 0; i < 3; i++) {
        if(i == 0) {
            min = matrix[targetRow][i];
        } else if(matrix[targetRow][i] < min) {
            min = matrix[targetRow][i];
        }
    }
    cout<<"Min: "<<min;
}