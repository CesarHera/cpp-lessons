#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // int matrix[3][3], matrix2[3][3];

    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout<<"Row "<<i<<", Column "<<j<<": "; cin>>matrix[i][j];
    //     }
    // }

    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         matrix2[i][j] = matrix[j][i];
    //         cout<<matrix2[i][j];
    //     }
    //     cout<<endl;
    // }

    int matrix1[3][3] = {1,2,3,
                         4,5,6,
                         7,8,9};
    int matrix2[3][3] = {1,2,3,
                         4,5,6,
                         7,8,9};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<"\t"<<matrix1[i][j] + matrix2[i][j];
        }
        cout<<endl;
    }



    system("pause");
    return 0;
}