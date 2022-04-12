#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // int excel[100][100], rows, columns;

    // cout<<"How many rows?: "; cin>>rows;
    // cout<<"How many columns?: "; cin>>columns;

    // for(int i = 0; i < rows; i++) {
    //     for(int j = 0; j < columns; j++) {
    //         cout<<"Row "<<i + 1<<", Column "<<j + 1<<": "; cin>>excel[i][j];
    //     }
    // }

    // for(int i = 0; i < rows; i++) {
    //     for(int j = 0; j < columns; j++) {
    //         cout<<"\t"<<excel[i][j];
    //     }
    //     cout<<endl;
    // }


    int matrix[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<"Row "<<i + 1<<", Column "<<j + 1<<": "; cin>>matrix[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        cout<<matrix[i][i]<<endl;
    }




    system("pause");
    return 0;
}