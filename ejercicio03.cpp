#include <iostream>
using namespace std;
void arreglo(int *A, int tam){
	int aux,*menor;
	int *x=A+tam;
	for(;A<x;A++){
		menor=A;
		for(menor=A+1;menor<x;menor++){
			if(*A>*menor){
				aux=*A;
				*A=*menor;
				*menor=aux;
			}
		}
	}
}
void mostrar(int array[], int tam){
	for(int i=0;i<tam;i++){
		cout<<array[i]<<" ";
	} 
}
int main(){
	int array[]={8,5,6,3,4,9};
	int tam=sizeof(array)/sizeof(array[0]);
	arreglo(array,tam);
	mostrar(array,tam);
	
	return 0;
}