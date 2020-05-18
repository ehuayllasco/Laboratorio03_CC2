#include <iostream>
using namespace std;
int cadena(char *A){
	int cont=0;
	while(*(A++)!='\0'){
		cont+=1;
	}
	return cont;
}

int main(){
	char caden[100];
	cout<<"ingrese una cadena: ";
	cin.getline(caden,100,'\n');
	cout<<"el largo de su cadena es: "<<cadena(caden);
	return 0;
}