#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int sorted_numbers[] = {1,2,3,4,5,6,7,8}, i_min, i_max, i_mid, target = 8, tries = 0;


    i_min = 0;
    i_max = 7;
    i_mid = (i_min + i_max) / 2;

    while(i_min <= i_max) {
    // for(int i = 0; i < 8; i++) {
        tries++;
        if(target == sorted_numbers[i_mid]) {
            cout<<"Here at index: "<<i_mid;
            break;
        // else if(i_min == i_max) {
        //     cout<<"Not here";
        //     break;
        } else if(target > i_mid) {
            i_min = i_mid + 1;
            i_mid = (i_min + i_max) / 2;
        } else {
            i_max = i_mid - 1;
            i_mid = (i_min + i_max) / 2;
        }
    }
    cout<<endl<<tries;
    getch();
    return 0;
}