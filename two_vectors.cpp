#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // int v1_length, v2_length, vector1[50], vector2[50], vector3[100];


    // cout<<"\tEnter the length of the first vector(Max. 50): "; cin>>v1_length;
    // for(int i = 0; i < v1_length; i++) {
    //     cout<<"Index "<<i<<": "; cin>>vector1[i];
    //     vector3[i] = vector1[i];
    // }

    // cout<<"\tEnter the length of the second vector(Max. 50): "; cin>>v2_length;
    // for(int i = v1_length; i < (v1_length + v2_length); i++) {
    //     cout<<"Index "<<i<<": "; cin>>vector2[i];
    //     vector3[i] = vector2[i];
    // }
    
    // for(int i = 0; i < (v1_length + v2_length); i++) {
    //     cout<<vector3[i]<<endl;
    // }

    // system("pause");


    int vector1[] = {1,2,3,4,5}, vector2[5];

    for(int i = 0; i < 5; i++) {
        vector2[i] = vector1[i] * 2;
        cout<<vector2[i]<<endl;
    }

        system("pause");

    return 0;
}