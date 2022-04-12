#include <iostream>
#include <stdlib.h>

using namespace std;

struct Stage {
    int hours;
    int min;
    int sec;
} stages[3];

void Fill_data(Stage *);

void Total_time(Stage *);

int main() {
    struct Stage *stages_pointer = stages;
    Fill_data(stages_pointer);
    Total_time(stages_pointer);

    cout<<endl; system("pause");
    return 0;
}

void Fill_data(Stage *pointer) {
    for(int i = 0; i < 3; i++) {
        cout<<i + 1<<". Stage\n";
        cout<<"Hours: "; cin>>(pointer + i)->hours;
        cout<<"Mins: "; cin>>(pointer + i)->min;
        cout<<"Secs: "; cin>>(pointer + i)->sec;
    }
}

void Total_time(Stage *pointer) {
    int hours = (pointer + 0)->hours + (pointer + 1)->hours + (pointer + 2)->hours;
    int mins = (pointer + 0)->min + (pointer + 1)->min + (pointer + 2)->min;
    int secs = (pointer + 0)->sec + (pointer + 1)->sec + (pointer + 2)->sec;
    mins += secs / 60; secs %= 60;
    hours += mins / 60; mins %= 60;
    cout<<"Total hours: "<<hours<<endl;
    cout<<"Total mins: "<<mins<<endl;
    cout<<"Total secs: "<<secs<<endl;
}