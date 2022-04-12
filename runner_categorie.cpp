#include <iostream>
#include <conio.h>
// #include <string.h>

using namespace std;

// struct runner
// {
//     char name[20];
//     int age;
//     char sex[20];
//     char club[20];
//     char league[20];
// } user_runner;

struct student {
    char name[20];
    int age;
    float mean;
};

int main() {
    // cout<<"Enter your name: "; cin.getline(user_runner.name, 20, '\n');
    // cout<<"Enter your age: "; cin>>user_runner.age;
    // rewind(stdin);
    // cout<<"Enter your sex: "; cin.getline(user_runner.sex, 20, '\n');
    // cout<<"Enter your club: "; cin.getline(user_runner.club, 20, '\n');

    // if(user_runner.age <= 18) {
    //     strcpy(user_runner.league, "youth league");
    // } else if(user_runner.age <= 40) {
    //     strcpy(user_runner.league, "adult league");
    // } else {
    //     strcpy(user_runner.league, "senior league");
    // }

    // cout<<"\n\tRunner:\n";
    // cout<<"Name: "<<user_runner.name<<endl;
    // cout<<"Age: "<<user_runner.age<<endl;
    // cout<<"Sex: "<<user_runner.sex<<endl;
    // cout<<"Club: "<<user_runner.club<<endl;
    // cout<<"League: "<<user_runner.league<<endl;

    struct student students[3];
    int means[2][3], aux, largest_mean, largest_mean_i;

    for(int i = 0; i < 3; i++) {
        cout<<"\n\tStudent "<<i + 1<<":\n";
        cout<<"Name: "; cin.getline(students[i].name, 20, '\n');
        cout<<"Age: "; cin>>students[i].age;
        cout<<"Mean: "; cin>>students[i].mean;
        if(i == 0) {
            largest_mean = students[i].mean;
            largest_mean_i = i;
        } else if(largest_mean < students[i].mean) {
            largest_mean = students[i].mean;
            largest_mean_i = i;
        }
        rewind(stdin);
    }


    cout<<"\n\tBest student:\nStudent number "<<largest_mean_i + 1<<":\n";
    cout<<"Name: "<<students[largest_mean_i].name<<endl;
    cout<<"Age: "<<students[largest_mean_i].age<<endl;
    cout<<"Mean: "<<students[largest_mean_i].mean<<endl;


    getch();
    return 0;
}