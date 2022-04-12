#include <iostream>

using namespace std;

int main() {
    char character;

    cout<<"Type a vocal: "; cin>>character;

    switch(character) {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': cout<<"Is lower case"; break;
        case 'A': 
        case 'E': 
        case 'I': 
        case 'O': 
        case 'U': cout<<"Is upper case"; break;
        default: cout<<"Not a vocal";
    }

    return 0;
}