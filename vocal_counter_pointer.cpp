#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void CountVocals(char *);

int main() {
    char phrase[20];
    cout<<"Type a phrase: "; cin.getline(phrase, 20, '\n');

    CountVocals(phrase);

    cout<<endl;
    system("pause");
    return 0;
}

void CountVocals(char *phrase) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    strupr(phrase);

    while(*phrase) { //While this is not null == '\0'
        switch(*phrase) {
            case 'A': a++; break;
            case 'E': e++; break;
            case 'I': i++; break;
            case 'O': o++; break;
            case 'U': u++; break;
        }
        phrase++;
    }

    cout<<"A: "<<a<<endl;
    cout<<"E: "<<e<<endl;
    cout<<"I: "<<i<<endl;
    cout<<"O: "<<o<<endl;
    cout<<"U: "<<u<<endl;
    cout<<"Total: "<<a+e+i+o+u<<endl;
}