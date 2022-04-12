#include <iostream>
#include <stdlib.h>

using namespace std;

int* Fill_data(int n);

void Binary_search(int *, int, int);

int main() {
    int n;
    cout<<"How many values?: "; cin>>n;

    Binary_search( Fill_data(n), n , 12);


    cout<<endl;
    system("pause");
    return 0;
}

int* Fill_data(int n) {
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cout<<i + 1<<". Enter a value: "; cin>>arr[i];
    }

    return arr;
}

void Binary_search(int *arr, int n, int target) {
    int lower = 0, upper = n - 1, mid = (upper + lower) / 2;
    bool found = false;
    while(lower < upper && found == false) {
        if(*(arr+mid) == target) {
            found = true;
        } else if(*(arr+mid) < target) {
            lower = mid + 1;
            mid = (upper + lower) / 2;
        } else {
            upper = mid - 1;
            mid = (upper + lower) / 2;
        }
    }

    if(found) {
        cout<<endl<<"Is here at index: "<<mid;
    } else {
        cout<<endl<<"Not here";
    }
}  