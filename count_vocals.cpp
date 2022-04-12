#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    char phrase[100];
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

    cout<<"Type something: "; cin.getline(phrase, 100, '\n');

    for(int i = 0; i < 100; i++) {
        switch(phrase[i]){
            case 'a': vocal_a++; break;
            case 'e': vocal_e++; break;
            case 'i': vocal_i++; break;
            case 'o': vocal_o++; break;
            case 'u': vocal_u++; break;
        }           
    }
    cout<<"Vocal a: "<<vocal_a<<endl;
    cout<<"Vocal e: "<<vocal_e<<endl;
    cout<<"Vocal i: "<<vocal_i<<endl;
    cout<<"Vocal o: "<<vocal_o<<endl;
    cout<<"Vocal u: "<<vocal_u<<endl;



    cout<<endl;
    system("pause");
    return 0;
}