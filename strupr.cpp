#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char word[] = "chupapi", word2[] = "couPaPi";

    if(strcmp(strupr(word), strupr(word2)) == 0) {
        cout<<"Same strings";
    } else {
        cout<<"Different strings";
    }

    getch();
    return 0;
}