#include <iostream>
using namespace std;

void copiar(char x[], int a, char z[]);
int cadena(char x[]);
char x[100], b[50];
int a,c;

int main(){
	cout<<"ingrese una cadena: ";
	cin.getline(x,100,'\n');
	a=cadena(x);

	cout<<"ingrese otra cadena: ";
	cin.getline(b,50,'\n');

	copiar(x,a,b);
	cout<<"la cadena copiada es :"<<b;
	return 0;
}

int cadena(char x[]){
	int cont=0;
	while(x[cont]!='\0'){
		cont=cont+1;
	}
	return cont;
}

void copiar(char *A, int a, char *Z){
	char *x=A+a;
	for (; A<=x;A++,Z++){
		if(*A!='\0'){
			*Z=*A;

		}
		else{
			*Z='\0';
		}

	}
}

