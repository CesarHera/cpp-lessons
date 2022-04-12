#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int numbers[] = {6,4,5,3,21,4,23,645,12,7653,123}, i, j, aux;


    for(i = 0; i < 11; i++) {
        j = i;
        aux = numbers[j];
        while(numbers[j] < numbers[j - 1] && j > 0)  {
            numbers[j] = numbers[j - 1];
            numbers[j - 1] = aux;
            j--;
        }
    }

    cout<<"Ascendent: ";
    for(i = 0; i < 11; i++){
        cout<<numbers[i]<<" ";
    }

    cout<<"\nDescendent: ";
    for(i = 10; i >= 0; i--){
        cout<<numbers[i]<<" ";
    }

    cout<<endl;
    system("pause");
    return 0;
}