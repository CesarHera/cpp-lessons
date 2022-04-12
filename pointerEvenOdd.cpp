#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int num, *pNum = &num;

    do {
        bool prime = true;
        cout<<"\nEnter a number: "; cin>>*pNum;
        // if(*pNum % 2 == 0) {
        //     cout<<"\tEven "<<pNum<<endl;
        // } else {
        //     cout<<"\tOdd "<<pNum<<endl;
        // }
        if(*pNum != 0 && *pNum != 1 && *pNum != 2) {
            for(int i = 2; i < *pNum; i++) {
                if(*pNum % i == 0) {
                    prime = false;
                    break;
                }
            }
        }
        if(prime == true) {
            cout<<"Prime number "<<pNum<<endl;
        } else {
            cout<<"Not prime number "<<pNum<<endl;
        }
    } while(*pNum != 0);



    getch();
    return 0;
}