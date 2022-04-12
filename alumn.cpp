#include <iostream>
#include <conio.h>

using namespace std;

struct mean {
    float note1;
    float note2;
    float note3;
};

struct student
{
    char name[20];
    char sex[20];
    int age;
    struct mean student_mean;
};



int main() {
    struct student students[100];
    int max_i, n;
    float max, actual_mean;

    cout<<"How many students?: "; cin>>n;

    for(int i = 0; i < n; i++) {
        rewind(stdin);
        cout<<"\n\tStudent "<<i + 1<<": \n";
        cout<<"Name: "; cin.getline(students[i].name, 20, '\n');
        cout<<"Sex: "; cin.getline(students[i].sex, 20, '\n');
        cout<<"Age: "; cin>>students[i].age;
        cout<<"Note 1: "; cin>>students[i].student_mean.note1;
        cout<<"Note 2: "; cin>>students[i].student_mean.note2;
        cout<<"Note 3: "; cin>>students[i].student_mean.note3;
        actual_mean = (students[i].student_mean.note1 + students[i].student_mean.note2 + students[i].student_mean.note3) / n;
        if(i == 0) {
            max = actual_mean;
            max_i = i;
        } else if(actual_mean > max) {
            max = actual_mean;
            max_i = i;
        }
    }


    cout<<"\tBest grade Student:\n";
    cout<<"Name: "<<students[max_i].name<<endl;
    cout<<"Sex: "<<students[max_i].sex<<endl;
    cout<<"Age: "<<students[max_i].age<<endl;
    cout<<"Mean: "<<(students[max_i].student_mean.note1 + students[max_i].student_mean.note2 + students[max_i].student_mean.note3) / 3<<endl;


    getch();
    return 0;
}