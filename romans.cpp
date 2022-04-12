#include <iostream>

using namespace std;

int main() {
    // int number, units, tens, hundreds, thousands;

    // cout<<"Type a number: "; cin>>number;
    // //number = 2152 -> 2000+100+50+2

    // units = number % 10; number /= 10; //units = 2 | number = 215
    // tens = number % 10; number /= 10; //tens = 5 | number = 21
    // hundreds = number % 10; number /= 10;  //hundreds = 1 | number = 2 
    // thousands = number % 10; number /= 10; //thousands = 2 | number = 0

    // cout<<"Here's your roman number: ";

    // switch(thousands) {
    //     case 1: cout<<"M"; break;
    //     case 2: cout<<"MM"; break;
    //     case 3: cout<<"MMM"; break;
    //     default: cout<<""; break;
    // }
    // switch(hundreds) {
    //     case 1: cout<<"C"; break;
    //     case 2: cout<<"CC"; break;
    //     case 3: cout<<"CCC"; break;
    //     case 4: cout<<"CD"; break;
    //     case 5: cout<<"D"; break;
    //     case 6: cout<<"DC"; break;
    //     case 7: cout<<"DCC"; break;
    //     case 8: cout<<"DCCC"; break;
    //     case 9: cout<<"CM"; break;
    //     default: cout<<""; break;
    // }
    // switch(tens) {
    //     case 1: cout<<"X"; break;
    //     case 2: cout<<"XX"; break;
    //     case 3: cout<<"XXX"; break;
    //     case 4: cout<<"XL"; break;
    //     case 5: cout<<"L"; break;
    //     case 6: cout<<"LX"; break;
    //     case 7: cout<<"LXX"; break;
    //     case 8: cout<<"LXXX"; break;
    //     case 9: cout<<"XC"; break;
    //     default: cout<<""; break;
    // }
    // switch(units) {
    //     case 1: cout<<"I"; break;
    //     case 2: cout<<"II"; break;
    //     case 3: cout<<"III"; break;
    //     case 4: cout<<"IV"; break;
    //     case 5: cout<<"V"; break;
    //     case 6: cout<<"VI"; break;
    //     case 7: cout<<"VII"; break;
    //     case 8: cout<<"VIII"; break;
    //     case 9: cout<<"IX"; break;
    //     default: cout<<""; break;
    // }

    int month;

    cout<<"Enter a month(1-12): "; cin>>month;

    if(month < 1 || month > 12) {
        cout<<"Enter a correct value";
    } else {
        switch(month){
            case 1: cout<<"January"; break;
            case 2: cout<<"February"; break;
            case 3: cout<<"March"; break;
            case 4: cout<<"April"; break;
            case 5: cout<<"May"; break;
            case 6: cout<<"June"; break;
            case 7: cout<<"July"; break;
            case 8: cout<<"August"; break;
            case 9: cout<<"September"; break;
            case 10: cout<<"October"; break;
            case 11: cout<<"November"; break;
            case 12: cout<<"December"; break;
            default: cout<<"Enter a correct value"; break;
        }
    }




    return 0;
}