#include <iostream>
#include <stdlib.h>

using namespace std;

void Transpose(int **, int, int);

int main() {  
    int **matrix = new int*[3];
    for(int i = 0; i < 3; i++) {
        *(matrix + i) = new int[3];
    }
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin>>*(*(matrix + i) + j);
        }
    }

    Transpose(matrix, 3, 3);

    for(int i = 0; i < 3; i++) {
        delete[] (matrix + i);
    }

    delete[] matrix;

    cout<<endl; system("pause");
    return 0;
}

void Transpose(int **matrix, int rows, int columns) {
    if(rows == columns) {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < columns; j++) {
                cout<<"\t"<<*(*(matrix + j) + i);
            }
            cout<<endl;
        }
    } else {
        cout<<"This matrix can not be transpose, is not squared";
    }
}