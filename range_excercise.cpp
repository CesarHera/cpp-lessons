#include <iostream>

using namespace std;

int main() {
    // float number, sum;

    // do {
    //     cout<<"\nEnter a number: "; cin>>number;
    //     if (number > 0) {
    //         sum += number;
    //     }
    // } while((number > 30 || number < 20) && (number != 0));

    // cout<<"Total of the positive values: "<<sum;

    int x, y, total;
    
    cout<<"Enter a integer for x: "; cin>>x;
    cout<<"Enter a integer for y: "; cin>>y;

    for(int i = 1; i < y; i++) {
        if(y == 0) {
            break;
        }
        cout<<i;
        x *= x;
    }

    cout<<"\nResult: "<<x;

    return 0;
}