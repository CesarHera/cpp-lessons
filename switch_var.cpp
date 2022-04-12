#include<iostream>

using namespace std;

int main(){
    /*
    float x, y, aux;
    
    cout<<"x value: "; cin>>x;
    cout<<"y value: "; cin>>y;
    
    aux = x;
    x = y;
    y = aux;

    cout<<"New values:\nX: "<<x<<"\nY: "<<y;
    */

    float alumn1,alumn2,alumn3,alumn4, mean;

    cout<<"Alumn 1 grade: ";cin>>alumn1;
    cout<<"Alumn 2 grade: ";cin>>alumn2;
    cout<<"Alumn 3 grade: ";cin>>alumn3;
    cout<<"Alumn 4 grade: ";cin>>alumn4;

    mean = (alumn1+alumn2+alumn3+alumn4) / 4;

    cout<<"The mean grade is: "<<mean;

    return 0;
}