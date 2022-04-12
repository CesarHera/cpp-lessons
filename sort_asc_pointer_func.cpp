#include <iostream>
#include <stdlib.h>

using namespace std;

int* Fill_Data(int);

void Ascendent_sort(int *, int n);

int main() {
    int n;
    cout<<"How many numbers?: "; cin>>n;

    Ascendent_sort( Fill_Data(n) , n );

    cout<<endl;
    system("pause");
    return 0;
}

int* Fill_Data(int n) {

    int *nums = new int[n];

    for(int i = 0; i < n; i++) {
        cout<<i + 1<<". Enter a value: "; cin>>*(nums+i);
    } 
    
    // for(int i = 0; i < n; i++) {
    //     cout<<i + 1<<". Value: "<<nums[i]<<endl;
    // }

    return nums;
}

void Ascendent_sort(int *arr, int n) {
    int aux;
    for(int i = 1; i < n; i++) {
        while(*(arr + i) < *((arr + i) - 1) && i > 0) {
            aux = *(arr + i);
            *(arr + i) = *((arr + i) - 1);
            *((arr + i) - 1) = aux;
            i--;
        }
    }

    cout<<"\t\nSorted list:\n";

    for(int i = 0; i < n; i++) {
        cout<<*(arr + i)<<endl;
    }

    delete[] arr;
}