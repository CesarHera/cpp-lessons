#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // int symmetric = 0, matrix[3][3] = {1,2,3,
    //                                    2,9,4,
    //                                    3,4,8};

        
    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         if(matrix[i][j] == matrix[j][i]) {
    //             symmetric += 1;
    //         }
    //     }
    // }

    // if(symmetric == 9) {
    //     cout<<"Is symmetric :)";
    // } else {
    //     cout<<"Is not symmetric :)";
    // }


    int matrix1[3][3] = {1,2,3,
                         4,5,6,
                         7,8,9};
    int matrix2[3][3] = {1,2,3,
                         4,5,6,
                         7,8,9};


    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<"\t"<<matrix1[i][j] * matrix2[i][j];
        }
        cout<<endl;
    }


    cout<<endl;
    system("pause");
    return 0; 
}