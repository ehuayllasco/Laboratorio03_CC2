#include <iostream>
using namespace std;
//ITERATIVA
int cadena(char *A,int cont){
	if(*A=='\0'){
		return cont;
	}
	return cadena(++A,++cont);
}
int main(){
	char caden[100];
	int cont=0;
	cout<<"ingrese una cadena: ";
	cin.getline(caden,100,'\n');
	cout<<"el largo de tu cadena es: "<<cadena(caden,cont);
	return 0;
}