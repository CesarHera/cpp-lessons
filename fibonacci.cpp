#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // int number, f1 = 1, f2 = 1, aux;
    // cout<<"Enter an integer number: "; cin>>number;
    
    // for(int i = 1; i <= number; i++) {
    //     if(i == 1 || i == 2) {
    //         cout<<"\nFibonacci: 1";
    //         continue;
    //     }

    //     aux = f2;
    //     f2 += f1;
    //     f1 = aux;
    //     cout<<"\nFibonacci: "<<f2;
    // }

    // cout<<"\n";
    // system("pause");






    // int alumn1_1, alumn1_2, alumn1_3, alumn2_1, alumn2_2, alumn2_3, 
    //     alumn3_1, alumn3_2, alumn3_3, alumn4_1, alumn4_2, alumn4_3,
    //     alumn5_1, alumn5_2, alumn5_3;
    // int three = 0, at_least_one = 0, last_one = 0;

    // cout<<"\tAlumn 1: \n"; cin>>alumn1_1>>alumn1_2>>alumn1_3;
    // cout<<"\tAlumn 2: \n"; cin>>alumn2_1>>alumn2_2>>alumn2_3;
    // cout<<"\tAlumn 3: \n"; cin>>alumn3_1>>alumn3_2>>alumn3_3;
    // cout<<"\tAlumn 4: \n"; cin>>alumn4_1>>alumn4_2>>alumn4_3;
    // cout<<"\tAlumn 5: \n"; cin>>alumn5_1>>alumn5_2>>alumn5_3;

    // for(int i = 0; i < 15; i++){
    //     switch (i)
    //     {
    //     // alumn 1
    //     case 0:
    //         if(alumn1_1 >= 6 && alumn1_2 >= 6 && alumn1_3 >= 6) {
    //             three += 1;
    //         }
    //         break;
    //     case 1:
    //         if(alumn1_1 >= 6 || alumn1_2 >= 6 || alumn1_3 >= 6) {
    //             at_least_one += 1;
    //         }
    //         break;
    //     case 2:
    //         if(alumn1_1 < 6 && alumn1_2 < 6 && alumn1_3 >= 6) {
    //             last_one += 1;
    //         }
    //         break;
        
    //     // alumn 2
    //     case 3:
    //         if(alumn2_1 >= 6 && alumn2_2 >= 6 && alumn2_3 >= 6) {
    //             three += 1;
    //         }
    //         break;
    //     case 4:
    //         if(alumn2_1 >= 6 || alumn2_2 >= 6 || alumn2_3 >= 6) {
    //             at_least_one += 1;
    //         }
    //         break;
    //     case 5:
    //         if(alumn2_1 < 6 && alumn2_2 < 6 && alumn2_3 >= 6) {
    //             last_one += 1;
    //         }
    //         break;
        
    //     // alumn 3
    //     case 6:
    //         if(alumn3_1 >= 6 && alumn3_2 >= 6 && alumn3_3 >= 6) {
    //             three += 1;
    //         }
    //         break;
    //     case 7:
    //         if(alumn3_1 >= 6 || alumn3_2 >= 6 || alumn3_3 >= 6) {
    //             at_least_one += 1;
    //         }
    //         break;
    //     case 8:
    //         if(alumn3_1 < 6 && alumn3_2 < 6 && alumn3_3 >= 6) {
    //             last_one += 1;
    //         }
    //         break;

    //     // alumn 4
    //     case 9:
    //         if(alumn4_1 >= 6 && alumn4_2 >= 6 && alumn4_3 >= 6) {
    //             three += 1;
    //         }
    //         break;
    //     case 10:
    //         if(alumn4_1 >= 6 || alumn4_2 >= 6 || alumn4_3 >= 6) {
    //             at_least_one += 1;
    //         }
    //         break;
    //     case 11:
    //         if(alumn4_1 < 6 && alumn4_2 < 6 && alumn4_3 >= 6) {
    //             last_one += 1;
    //         }
    //         break;

    //     // alumn 5
    //     case 12:
    //         if(alumn5_1 >= 6 && alumn5_2 >= 6 && alumn5_3 >= 6) {
    //             three += 1;
    //         }
    //         break;
    //     case 13:
    //         if(alumn5_1 >= 6 || alumn5_2 >= 6 || alumn5_3 >= 6) {
    //             at_least_one += 1;
    //         }
    //         break;
    //     case 14:
    //         if(alumn5_1 < 6 && alumn5_2 < 6 && alumn5_3 >= 6) {
    //             last_one += 1;
    //         }
    //         break;

    //     default:
    //         break;
    //     }
    // }

    // cout<<"Three: "<<three<<endl;
    // cout<<"At least one: "<<at_least_one<<endl;
    // cout<<"Last one: "<<last_one<<endl;

    // system("pause");





    int grade1, grade2, grade3, three = 0, at_least_one = 0, last_one = 0;
    
    for(int alumn = 1; alumn < 6; alumn++) {
        cout<<"\tAlumn "<<alumn<<":";
        do {
            cout<<"\nGrade 1: "; cin>>grade1;
        } while(grade1 > 10 || grade1 < 0);
        do {
            cout<<"\nGrade 2: "; cin>>grade2;
        } while(grade2 > 10 || grade2 < 0);
        do {
            cout<<"\nGrade 3: "; cin>>grade3;
        } while(grade3 > 10 || grade3 < 0);

        cout<<grade1<<endl<<grade2<<endl<<grade3;
        if(grade1 >= 6 && grade2 >= 6 && grade3 >= 6) {
            three += 1;
        }
        if(grade1 >= 6 || grade2 >= 6 || grade3 >= 6) {
            at_least_one += 1;
        }
        if(grade1 < 6 && grade2 < 6 && grade3 >= 6) {
            last_one += 1;
        }
    }

    cout<<"\n\tStatistics:\n";
    cout<<"All past: "<<three<<endl;
    cout<<"At least one: "<<at_least_one<<endl;
    cout<<"Just the last: "<<last_one<<endl;

    system("pause");
    return 0;
}
