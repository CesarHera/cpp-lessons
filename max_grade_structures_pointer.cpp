#include <iostream>
#include <stdlib.h>

using namespace std;

struct Student {
    char name[20];
    int grade;
} students[3], *students_p = students;

void Fill_data();

void Max_grade();

int main() {
    Fill_data();
    Max_grade();



    cout<<endl; system("pause");
    return 0;
}

void Fill_data() {
    for(int i = 0; i < 3; i++) {
        cout<<i + 1<<". student\n";
        rewind(stdin);
        cout<<"Name: "; cin.getline((students_p + i)->name, 20, '\n');
        cout<<"Grade: "; cin>>(students_p + i)->grade;
    }
}

void Max_grade() {
    int max_i = 0;; // If you want to know more about the winner, save the index, then print everything you want
    for(int i = 1; i < 3; i++) {
        if((students_p+max_i)->grade < (students_p + i)->grade) {
            max_i = i;
        }
    }
    cout<<"\tBest grade alumn:\n";
    cout<<"Name: "<<(students_p+max_i)->name<<endl;
    cout<<"Grade: "<<(students_p+max_i)->grade;
}