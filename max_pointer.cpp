#include <iostream>
#include <stdlib.h>

using namespace std;

void Max(int *);

int main() {
    int nums[] = {134, 1, 25, 342,12,4,5};

    Max(nums);

    // for( int i = 0; i < 5; i++) {
    //     cout<<*nums+i;
    // }

    cout<<endl;
    system("pause");
    return 0;
}

void Max(int *arr) {
    // for(int i = 0; i < 5; i++) {
    //     cout<<arr[i]<<endl;
    // }
    // int max = *arr;
    // for( int i = 0; i < 5; i++) {
    //     if(*(arr+i) > max) {
    //         max = *(arr+i);
    //     }
    // }
    // cout<<"Max: "<<max;
    for( int i = 0; i < 5; i++) {
        cout<<arr[i]<<endl;
    }
}