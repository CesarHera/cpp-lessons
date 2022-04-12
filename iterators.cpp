#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    // print an array
    int nums[] = {1,2,3,4,5,6}, *p_num = &nums[1]; // = nums will set you at index 0 direction

    for(int i = 1; i < 6; i++) {
        cout<<"Index "<<i<<": "<<*p_num++<<endl;
    }

    getch();
    return 0;
}