#include<iostream>

using namespace std;

int main(){
    char name[15];
    char sex;
    int age;
    float height;

    cout<<"Enter your name: "; cin>>name;
    cout<<"Enter your age: "; cin>>age;
    cout<<"Enter your height: "; cin>>height;
    cout<<"Enter your sex: "; cin>>sex;

    cout<<"Your information:";
    cout<<"\nName: "<<name;
    cout<<"\nAge: "<<age;
    cout<<"\nHeight: "<<height<<"m";
    cout<<"\nSex: "<<sex;

    

    return 0;
}