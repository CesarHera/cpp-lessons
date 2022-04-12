#include <iostream>
#include <conio.h>

using namespace std;

// struct employee {
//     char name[20];
//     float salary;
// } employees[100] = {
//     // {"Chuy", 800},
//     // {"Efren", 10000},
//     // {"Cesar", 6000},
//     // {"David", 10200},
//     // {"Jefferson",20000},
//     // {"Peter", 5000}
// };

struct athlete {
    char name[20];
    char country[20];
    int medals;
}athletes[100];

int main() {
    // int min, max, min_i, max_i, n;
    // cout<<"How many employees:"; cin>>n;
    // for(int i = 0; i < n; i++) {
    //     rewind(stdin);
    //     cout<<"\tEmployee "<<i + 1<<":\n";
    //     cout<<"Name: "; cin.getline(employees[i].name, 20, '\n');
    //     cout<<"Salary: "; cin>>employees[i].salary;
    // }

    // for(int i = 0; i < n; i++) {
    //     if(i == 0) {
    //         min = employees[i].salary;
    //         min_i = i;
    //         max = employees[i].salary;
    //         max_i = i;
    //     } else if(employees[i].salary > max) {
    //         max = employees[i].salary;
    //         max_i = i;
    //     } else if(employees[i].salary < min) {
    //         min = employees[i].salary;
    //         min_i = i;
    //     }
    // }

    // cout<<"Max salary: "<<employees[max_i].name<<endl;
    // cout<<"Min salary: "<<employees[min_i].name<<endl;
    
    int n, max, max_i;

    cout<<"How many athletes?: "; cin>>n;

    for(int i = 0; i < n; i++){
        rewind(stdin);
        cout<<"\tAthlete "<<i + 1<<"\n";
        cout<<"Name: "; cin.getline(athletes[i].name, 20, '\n');
        cout<<"Country: "; cin.getline(athletes[i].country, 20, '\n');
        cout<<"Medals: "; cin>>athletes[i].medals;
        if(i == 0){
            max = athletes[i].medals;
            max_i = i;
        } else if(athletes[i].medals > max) {
            max = athletes[i].medals;
            max_i = i;
        }
    }

    cout<<"\tMost medals: Athlete "<<max_i + 1<<endl;
    cout<<"Name: "<<athletes[max_i].name<<endl;
    cout<<"Country: "<<athletes[max_i].country<<endl;


    
    getch();
    return 0;
}