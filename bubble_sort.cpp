#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int numbers[] = {3,4,6,4,1,2,3,4,56,87,89,6,2,3}, i, j, aux;

    for(i = 0; i < 14; i++) {
        for(j = 0; j < 13; j++) {
            if(numbers[j] > numbers[j + 1]) {
                aux = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = aux;
                cout<<"aux: "<<aux<<"numb[j]: "<<numbers[j]<<endl;

            }
        }
    }

    for(i = 0; i < 14; i++) {
        cout<<numbers[i]<<" "<<i<<" | ";
    }






    cout<<endl;
    system("pause");
    return 0;
}