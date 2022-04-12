#include <iostream>
#include <stdlib.h>

using namespace std;

void SquareMatrix(int matrix[][3], int mRows, int mColumns);

int main() {
    const int mRows = 3, mColumns = 3; // the variables to define the length of any array, uni and 2dimensional, has to be constant
    int matrix[mRows][mColumns] = {{9, 10, 11}, {12,13, 14}, {15,16, 17}};

    SquareMatrix(matrix, mRows, mColumns);

    cout<<endl;
    system("pause");
    return 0;
}

void SquareMatrix(int matrix[][3], int mRows, int mColumns) {
    for(int i = 0; i < mRows; i++) {
        for(int j = 0; j < mColumns; j++) {
            matrix[i][j] *= matrix[i][j];
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}