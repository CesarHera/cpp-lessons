#include <iostream>
#include <stdlib.h>

using namespace std;

void Show_matrix(int **, int, int); // Func prototype

int main() {
    int rows, columns, **matrix;
    cout<<"How many rows: "; cin>>rows;
    cout<<"How many columns: "; cin>>columns;

    matrix = new int*[rows]; // Defining matrix
    for(int i = 0; i < rows; i++) {
        *(matrix + i) = new int[columns];
    }

    for(int i = 0; i < rows; i++) { // Initializing matrix
        for(int j = 0; j < columns; j++) {
            cout<<"["<<i<<"]["<<j<<"] value: "; cin>>*(*(matrix + i) + j);
        }
    }

    Show_matrix(matrix, rows, columns);

    delete[] matrix;

    cout<<endl; system("pause"); // Pause the end of the program
    return 0;
}


void Show_matrix(int **matrix, int rows, int columns) {
    for(int i = 0; i < rows; i++) { // Printing matrix
        for(int j = 0; j < columns; j++) {
            cout<<*(*(matrix + i) + j)<<"\t";
        }
        cout<<"\n\n";
    }
}