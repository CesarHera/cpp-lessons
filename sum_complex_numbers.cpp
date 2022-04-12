#include <iostream>
#include <conio.h>

using namespace std;

// struct NComplex {
//     int real;
//     int imaginary;
//     char literal;
// }
// z1 = {-3, +29, 't'},
// z2 = {3, -29, 't'};

// void SumComplexN(NComplex, NComplex);

struct Date {
    int day;
    int month;
    int year;
};

void Greater(Date, Date);

int main() {
    // SumComplexN(z1, z2);

    struct Date d1 = {1, 12, 2020}, d2 = {30, 11, 2021};
    
    Greater(d1, d2);
    
    getch();
    return 0;
}

// void SumComplexN(NComplex n1, NComplex n2) {
//     int real = n1.real + n2.real;
//     int imaginary = n1.imaginary + n2.imaginary;

//     if(real != 0) {
//         cout<<real;
//     }

//     if(imaginary > 0) {
//         cout<<"+"<<imaginary<<n1.literal;
//     } else if(imaginary < 0) {
//         cout<<imaginary<<n1.literal;
//     }

//     if(real == 0 && imaginary == 0) {
//         cout<<0;
//     }
// }   


void Greater(Date d1, Date d2) {
    int sumD1 = 0, sumD2 = 0;
    sumD1 += (d1.year - 1) * 365; //Sum past years
    sumD1 += (d1.month - 1) * 30; //Sum months
    sumD1 += d1.day;

    sumD2 += (d2.year - 1) * 365; //Sum past years
    sumD2 += (d2.month - 1) * 30; //Sum months
    sumD2 += d2.day;

    if(sumD1 == sumD2) {
        cout<<"Same day";
    } else if(sumD1 > sumD2) {
        cout<<"Date 1 is more recent";
    } else {
        cout<<"Date 2 is more recent";
    }
}