#include<iostream>

using namespace std;

int main(){
    /*
    float n1, n2, sum = 0, substract = 0, multiplication = 0, division = 0;

    cout<<"Type your first number: "; cin>>n1;
    cout<<"Type your second number: "; cin>>n2;
    
    sum = n1 + n2;
    substract = n1 - n2;
    multiplication = n1 * n2;
    division = n1 / n2;

    cout<<"Your operation results:\nSum: "
    <<sum<<"\nSubstract: "<<substract<<
    "\nMultiplication: "<<multiplication
    <<"\nDivision: "<<division;
    */

    float price;
    cout<<"Enter the price: "; cin>>price;
    
    float final_price = price + (price * 0.16);
    cout<<"The final price is: "<<final_price;

    return 0;
}