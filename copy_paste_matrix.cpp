#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    srand(time(NULL));
    // int matrix[2][2], matrix2[2][2];

    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         cout<<"Matrix["<<i<<"]["<<j<<"]: "; cin>>matrix[i][j];
    //     }
    // }

    // cout<<endl;

    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         matrix2[i][j] = matrix[i][j];
    //         cout<<"\nSecond Matrix["<<i<<"]["<<j<<"]: "<<matrix[i][j];
    //     }
    // }
    
    int matrix[100][100], matrix2[100][100], rows, columns, random;

    cout<<"Rows: "; cin>>rows;
    cout<<"\nColumns: "; cin>>columns;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            random = (rand() % 101);
            matrix[i][j] = random;
        }   
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            matrix2[i][j] = matrix[i][j];
            cout<<"\t"<<matrix[i][j];
        }
        cout<<endl;
    }


    cout<<endl;
    system("pause");
    return 0;
}