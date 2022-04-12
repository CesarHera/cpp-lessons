#include <iostream>
#include <stdlib.h>

using namespace std;

//Global variables
int **mtx1, **mtx2, rows, columns;

//Func prototypes
void Fill_dynamic_matrices();

void Sum_dynamic_matrices(int **, int **, int, int);

int main() {
    Fill_dynamic_matrices();
    Sum_dynamic_matrices(mtx1, mtx2, rows, columns);


    cout<<endl; system("pause"); // Pause the end of the program
    return 0;
}

//Defining funcs
void Fill_dynamic_matrices() {
    cout<<"First matrix\n";
    cout<<"How many rows?: "; cin>>rows;
    cout<<"How many columns?: "; cin>>columns;
    //Defining first matrix
    mtx1 = new int*[rows];
    for(int i = 0; i < rows; i++) {
        *(mtx1 + i) = new int[columns];
    }
    //Initializing first matrix
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout<<"["<<i<<"]["<<j<<"]: "; cin>>*(*(mtx1 + i) + j);
        }
    }

    
    cout<<"\n\nSecond matrix\n";
    cout<<"How many rows?: "; cin>>rows;
    cout<<"How many columns?: "; cin>>columns;
    //Defining second matrix
    mtx2 = new int*[rows];
    for(int i = 0; i < rows; i++) {
        *(mtx2 + i) = new int[columns];
    }
    //Initializing second matrix
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout<<"["<<i<<"]["<<j<<"]: "; cin>>*(*(mtx2 + i) + j);
        }
    }
}

void Sum_dynamic_matrices(int **mtx1, int **mtx2, int rows, int columns) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout<<"\t"<<(*(*(mtx2 + i) + j)) + (*(*(mtx1 + i) + j));
        }
        cout<<endl;
    }
}