#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int numbers[] = {6,3,7,1,5};
    char vocals[] = {'a', 'e', 'i', 'o', 'u'};

    for(int i = 0; i < 5; i++) {
        if(vocals[i] == 'd') {
            cout<<"Here! in index: "<<i;
            break;
        } else if(i == 4) {
            cout<<"Not here";
        }
    }



    getch();
    return 0;
}