#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main() {
    // float total = 0;
    // for(int i = 1; i < 11; i++) {
    //     total += pow(i, 2);
    // }

    // cout<<"Total: "<<total<<endl;

    // system("pause");





    // float mean, largest, smaller;
    // float temp1, temp2, temp3, temp4, temp5, temp6; 

    // for(int i = 1; i < 25; i++) {
    //     cout<<"\nHour "<<i;
    //     switch(i) {
    //         case 4:
    //             cout<<" | Enter the temperature: "; cin>>temp1; break;
    //         case 8:
    //             cout<<" | Enter the temperature: "; cin>>temp2; break;
    //         case 12:
    //             cout<<" | Enter the temperature: "; cin>>temp3; break;
    //         case 16:
    //             cout<<" | Enter the temperature: "; cin>>temp4; break;
    //         case 20:
    //             cout<<" | Enter the temperature: "; cin>>temp5; break;
    //         case 24:
    //             cout<<" | Enter the temperature: "; cin>>temp6; break;
    //     }
    // }

    // mean = (temp1 + temp2 + temp3 + temp4 + temp5 + temp6) / 6;
    // cout<<"Mean temperature: "<<mean<<endl;

    // if (temp1 > temp2 && temp1 > temp3 && temp1 > temp4 && temp1 > temp5 && temp1 > temp6) {
    //     cout<<"Higher temperature: "<<temp1<<endl;
    // } else if
    //     (temp2 > temp1 && temp2 > temp3 && temp2 > temp4 && temp2 > temp5 && temp2 > temp6) {
    //     cout<<"Higher temperature: "<<temp2<<endl;
    // } else if
    //     (temp3 > temp1 && temp3 > temp2 && temp3 > temp4 && temp3 > temp5 && temp3 > temp6) {
    //     cout<<"Higher temperature: "<<temp3<<endl;
    // } else if
    //     (temp4 > temp1 && temp4 > temp2 && temp4 > temp3 && temp4 > temp5 && temp4 > temp6) {
    //     cout<<"Higher temperature: "<<temp4<<endl;
    // } else if
    //    (temp5 > temp1 && temp5 > temp2 && temp5 > temp3 && temp5 > temp4 && temp5 > temp6) {
    //     cout<<"Higher temperature: "<<temp5<<endl;
    // } else if 
    //     (temp6 > temp5 && temp6 > temp2 && temp6 > temp3 && temp6 > temp4 && temp6 > temp1) {
    //     cout<<"Higher temperature: "<<temp6<<endl;
    // } else {
    //     cout<<"Higher temperature: "<<temp6<<endl;
    // }

    // if (temp1 < temp2 && temp1 < temp3 && temp1 < temp4 && temp1 < temp5 && temp1 < temp6) {
    //     cout<<"Lower temperature: "<<temp1<<endl;
    // } else if
    //     (temp2 < temp1 && temp2 < temp3 && temp2 < temp4 && temp2 < temp5 && temp2 < temp6) {
    //     cout<<"Lower temperature: "<<temp2<<endl;
    // } else if
    //     (temp3 < temp1 && temp3 < temp2 && temp3 < temp4 && temp3 < temp5 && temp3 < temp6) {
    //     cout<<"Lower temperature: "<<temp3<<endl;
    // } else if
    //     (temp4 < temp1 && temp4 < temp2 && temp4 < temp3 && temp4 < temp5 && temp4 < temp6) {
    //     cout<<"Lower temperature: "<<temp4<<endl;
    // } else if
    //    (temp5 < temp1 && temp5 < temp2 && temp5 < temp3 && temp5 < temp4 && temp5 < temp6) {
    //     cout<<"Lower temperature: "<<temp5<<endl;
    // } else if 
    //     (temp6 < temp5 && temp6 < temp2 && temp6 < temp3 && temp6 < temp4 && temp6 < temp1) {
    //     cout<<"Lower temperature: "<<temp6<<endl;
    // } else {
    //     cout<<"Lower temperature: "<<temp6<<endl;
    // }





    // float temp=0, alta=0, suma=0, baja=1000, media=0;
 
    // for(int i=6;i>0;i--){
    //  cout<<"Temperatura: "; cin>>temp;
    //  suma=(suma+temp);
    
    //  if(temp>alta){
    //   alta=temp;}
    
    //  if(temp<baja){
    //   baja=temp;} 
    // }
    
    // media=(suma/6);
    // cout<<"\nTemperatura maxima: "<<alta<<endl;
    // cout<<"Temperatura minima: "<<baja<<endl;
    // cout<<"Media del dia: "<<media<<endl;






    float temp, sum = 0, largest, smaller;
    
    for(int i = 4; i < 25; i += 4) {
        cout<<"Temperature "<<i<<": "; cin>>temp;
        sum += temp;
        if(i == 4) {
            largest = temp;
            smaller = temp;
            continue;
        }
        if(temp>largest) {
            largest = temp;
        }
        if(temp<smaller) {
            smaller = temp;
        }
    }

    cout<<"Mean: "<<sum / 6<<endl;
    cout<<"Largest: "<<largest<<endl;
    cout<<"Smaller: "<<smaller<<endl;



    return 0;
}