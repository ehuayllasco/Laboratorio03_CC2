#include <iostream>
using namespace std;
void invertir(int *A, int tam){
	int aux;
	int *B=A+tam-1;
	for (;A<B;B--,A++){
		aux=*A;
		*A=*B;
		*B=aux;
		
	}
}

int main(){
	int array[]={1,2,3,4,5};
	int tam=sizeof(array)/sizeof(array[0]);
	invertir(array,tam);
	for(int i=0;i<5;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}