//Ordenamiento por Selecci�n

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {2,54,1,454,51,24,2,1};
	int i,j,aux,min;
	
	//Algoritmo del Ordenamiento por Selecci�n
	for(i=0;i<8;i++){
		min = i;
		for(j=i+1;j<8;j++){
			if(numeros[j] < numeros[min]){
				min = j;
				cout<<min<<endl;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	
	cout<<"Orden Ascendente: ";
	for(i=0;i<8;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i=7;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
