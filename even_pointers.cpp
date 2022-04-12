#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int nums[100] = {}, *p_num1 = nums, n;

    cout<<"How many integers?: "; cin>>n;

    for(int i = 0; i < n; i++) {
        cout<<"Enter a num["<<i<<"]: "; cin>>*p_num1++;
    }

    int *p_num2 = nums, min = 0;

    for(int i = 0; i < n; i++) {
        // if(*p_num2 % 2 == 0) {
        //     cout<<*p_num2<<" Even "<<p_num2++<<endl;
        // } else {
        //     cout<<*p_num2++<<endl;
        // }
        if(i == 0) {
            min = *p_num2;
        } else if(*p_num2 < min) {
            min = *p_num2;
        }
        *p_num2++;
    }

    cout<<"\n\tMin: "<<min;


    getch();
    return 0;
}