#include <iostream>
#include <conio.h>

using namespace std;

struct Person {
    char name[20];
    int age;
};

// void nums(int, int); we do not need to define the variables in the prototype, just the type, EXCEPT: arrays

void DescribePerson(Person);

int main() {
    struct Person p1 = {"elPEPE", 28}, p2 = {"CHUPAPI MUÑEÑO", 342};

    // nums(1, 2);

    DescribePerson(p1);
    DescribePerson(p2);

    getch();
    return 0;
}

// void nums(int a, int b) {
//     cout<< a + b;
// }

void DescribePerson(Person p) {
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
}