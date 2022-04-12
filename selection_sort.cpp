#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    int numbers[] = {2,54,1,454,51,24,2,1}, min;

    // sorting
    for(int i = 0; i < 8; i++) {
        min = numbers[i];
        for(int j = i + 1; j < 8; j++) {
            if(numbers[j] < min) {
                min = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = min;
            }
        }
    }

    // printing
    cout<<"Ascendent: ";
    for(int i = 0; i < 8; i++) {
        cout<<numbers[i]<<" ";
    }
    cout<<"\nDescendent: ";
    for(int i = 7; i > -1; i--) {
        cout<<numbers[i]<<" ";
    }



    cout<<endl;
    system("pause");
    return 0;
}