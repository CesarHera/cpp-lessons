#include <iostream>
using namespace std;

struct adress {
    char city[20];
};

struct employee {
    char name[20];
    struct adress employee_adress;
    int salary;
};

int main() {
    struct employee employees[2];
    
    for(int i = 0; i < 2; i++) {
        // fflush(stdin); This one close the program before :/
        rewind(stdin); // so i prefer to use this one
        cout<<"\nPerson "<<i + 1<<":\n";
        cout<<"Name: "; cin.getline(employees[i].name, 20, '\n');
        cout<<"City name: ";  cin.getline(employees[i].employee_adress.city, 20, '\n');
        cout<<"Salary: "; cin>>employees[i].salary;
    }
    cout<<"HI";
    for(int j = 0; j < 2; j++) {
        cout<<"\n\tPerson "<<j + 1;
        cout<<"\nName: "<<employees[j].name;
        cout<<"\nCity: "<<employees[j].employee_adress.city;
        cout<<"\nSalary: "<<employees[j].salary;
    }


    return 0;
}