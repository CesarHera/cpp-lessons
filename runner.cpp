#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

// struct stage {
//     int hours, min, seconds;
// } stages[100];

struct person
{
    char name[20];
    bool invalid;
}persons[5];


int main() {
    // int n, total_h = 0, total_m = 0, total_s = 0;
    // cout<<"How many stages did you run?: "; cin>>n;

    // for(int i = 0; i < n; i++) {
    //     rewind(stdin);
    //     cout<<"\n\tStage "<<i + 1<<":\n";
    //     cout<<"Hours: "; cin>>stages[i].hours;
    //     cout<<"Minutes: "; cin>>stages[i].min;
    //     cout<<"Seconds: "; cin>>stages[i].seconds;
    //     total_h += stages[i].hours;
    //     total_m += stages[i].min;
    //     total_s += stages[i].seconds;
    // }


    // total_m += total_s / 60;
    // total_s = total_s % 60;
    // total_h += total_m / 60;
    // total_m = total_m % 60;

    // cout<<"Hours: "<<total_h<<endl;
    // cout<<"Minutes: "<<total_m<<endl;
    // cout<<"Seconds: "<<total_s<<endl;

    int j = 0, l = 0;
    char invalid[5][10];
    char no_invalid[5][10];

    for(int i = 0; i < 5; i++) {
        rewind(stdin);
        cout<<"\n\tPerson "<<i+ 1<<": \n";
        cout<<"Name: "; cin.getline(persons[i].name, 20, '\n');
        cout<<"Invalid?: "; cin>>persons[i].invalid;
        if(persons[i].invalid == true){
            strcpy(invalid[j], persons[i].name);
            j++;
        } else {
            strcpy(no_invalid[l], persons[i].name);
            l++;
        }
    }

    cout<<"\tInvalid persons:\n";
    for(int i = 0; i < j + 1; i++) {
        cout<<invalid[i]<<endl;
    }

    cout<<"\tNo invalid persons:\n";
    for(int i = 0; i < l + 1; i++) {
        cout<<no_invalid[i]<<endl;
    }



    getch();
    return 0;
}