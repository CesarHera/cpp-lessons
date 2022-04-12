#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // int numbers[] = {1,432,21,543,6543,6753,673,5345,3456}, largest;

    // for(int i = 0; i < 9; i++) {
    //     if(i == 0) {
    //         largest = numbers[i];
    //     } else if(numbers[i] > largest) {
    //         largest = numbers[i];
    //     }
    // } 

    // cout<<"Largest number: "<<largest<<endl;
    // system("pause");

    int numbers[100], n_lenght, sum = 0;

    cout<<"Enter the length of the list: "; cin>>n_lenght;

    for(int i = 0; i < n_lenght; i++) {
        cout<<"Index "<<i<<": "; cin>>numbers[i];
        sum += numbers[i];
    }

    cout<<"\n";

    for(int i = 0; i < n_lenght; i++) {
        if(sum - numbers[i] == numbers[i]) {
            cout<<"Total - "<<numbers[i]<<": "<<numbers[i]<<endl;
        }
    }



    return 0;
}