#include <iostream>
using namespace std;
void invertir(int *A, int *B){
	
	if(A<B){
	int aux=*A;
	*A=*B;
	*B=aux;
	invertir(++A,--B);
	}
}

int main(){
	int array[]={1,2,3,4,5};
	int tam=5;
	int *B=&array[tam-1];
	invertir(array,B);
	for(int i=0;i<5;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}