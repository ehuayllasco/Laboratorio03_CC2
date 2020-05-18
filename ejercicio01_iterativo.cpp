#include <iostream>
using namespace std;
void pedir_datos(int [], int);
int suma(int [], int);
int main(){
	int tam;
	cout<<"ingrese el largo de la cadena de enteros: ";
	cin>>tam;
	int array[tam];
	pedir_datos(array,tam);
	cout<<suma(array,tam);
	return 0;
}
void pedir_datos(int array[], int x){
	for(int i=0;i<x;i++){
		cout<<"ingrese el numero de la posicion "<<i+1<<" :";
		cin>>array[i];
	}
}
int suma(int *A, int x){
	int cont=0;
	for(int i=0;i<x;i++,A++){
		cont+=*A;
	}
	return cont;
}
