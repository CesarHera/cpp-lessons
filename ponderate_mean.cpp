#include<iostream>

using namespace std;

int main(){
    float practices, theory, participation, ponderate_mean;

    cout<<"Practices: "; cin>>practices;
    cout<<"Theory: "; cin>>theory;
    cout<<"Participation: "; cin>>participation;
    // ponderate_mean = ((practices*30)+(theory*60)+(participation*10)) / 100;
    practices *= 30;
    theory *= 60;
    participation *= 10;
    ponderate_mean = (practices+theory+participation) / 100;

    cout<<"Your grade is: "<<ponderate_mean;

    return 0;
}