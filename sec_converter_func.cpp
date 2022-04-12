#include <iostream>
#include <conio.h>

using namespace std;

// void Secs(int totalSec, int&, int&, int&);

void calc_years(int t_days, int&, int&, int&);

int main() {
    // int totalseconds, hours = 0, minutes = 0, seconds = 0;

    // cout<<"How many seconds do you want to convert?: "; cin>>totalseconds;
    // Secs(totalseconds, hours, minutes, seconds);

    int t_days, years = 2000, months = 1, days = 1;

    cout<<"How many days to convert?: "; cin>>t_days;

    calc_years(t_days, years, months, days);

    getch();
    return 0;
}

// void Secs(int totalSec, int& hours, int& mins, int& secs) {
//     if(totalSec >= 3600) {
//         hours = totalSec / 3600;
//         totalSec %= 3600;
//     }
//     if(totalSec >= 60) {
//         mins = totalSec / 60;
//         totalSec %= 60;
//     }
//     secs = totalSec;

//     cout<<"Hours: "<<hours<<endl;
//     cout<<"Minutes: "<<mins<<endl;
//     cout<<"Seconds: "<<secs<<endl;
// }

void calc_years(int t_days, int&years, int&months, int&days) {
    years += t_days / 360;
    t_days %= 360;
    months += t_days / 30;
    // if(months <= 0) {
    //     months = 1;
    // }
    t_days %= 30;
    days += t_days;
    // if(days <= 0) {
    //     days = 1;
    // }

    cout<<"Year: "<<years<<endl;
    cout<<"Month: "<<months<<endl;
    cout<<"Day: "<<days<<endl;
}