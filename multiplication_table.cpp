#include <iostream>

using namespace std;

int main() {
    // float number, product;

    // cout<<"Enter a number: "; cin>>number;

    // for(int i = 1; i <= 20; i++) {
    //     product = number * i;
    //     cout<<number<<" * "<<i<<" = "<<product<<endl;
    // }

    float number, i;

    for(i = 0; number!=0; i++) {
        cout<<"Enter a number: "; cin>>number;
        if (number < 0) {
            i--;
        }
    }
    cout<<"\nFails: "<<--i<<endl;

    system("pause");
    return 0;

    // int mayoresquecero=0;
    // float num;
    
    // do{
    //     cout<<"Introduzca un valor: "<<endl;
    //     cin>>num;
    
    //     if(num>0){ //aquí he metido un if sin else, ¿se puede/debe hacer? 
    //     mayoresquecero++;//sólo incremento el numero de mayores si es mayor que cero.
    //     }
    // }while (num != 0);//mientras el valor introducido no sea 0, sigo pidiendo valores.
    
    // cout<<"\nEl num de valores introducidos mayores que 0 ha sido: "<<mayoresquecero<<endl;
    // //una vez fuera del bucle muestro los mayoresquecero

    // cout<<"\n";
    // system ("pause");
}