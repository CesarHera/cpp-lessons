#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct person {
    char name[20];
    int age;
    float height;
}
// person1 = {"ElPepe", 20, 1.97},
// person2 = {"Chayanne", 42, 1.54}
person1;

int main() {
    // cout<<"\tPerson 1:\n";
    // cout<<"Name: "<<person1.name<<endl<<"Age: "<<person1.age<<endl<<"Height: "<<person1.height<<endl;
    // cout<<"\tPerson 2:\n";
    // cout<<"Name: "<<person2.name<<endl<<"Age: "<<person2.age<<endl<<"Height: "<<person2.height<<endl;

    cout<<"Enter your name: "; cin.getline(person1.name, 20, '\n');
    cout<<"Enter your age: "; cin>>person1.age;
    cout<<"Enter your height: "; cin>>person1.height;

    cout<<"\tYour data:\n";
    cout<<"Name: "<<person1.name<<endl<<"Age: "<<person1.age<<endl<<"Height: "<<person1.height<<endl;

    getch();
    return 0;
}