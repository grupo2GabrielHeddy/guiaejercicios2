// programa 1 investigacion 2 parte 2

#include <iostream>
#include <string.h>
using namespace std;

int main(){

char cad[50], car;
int NUM=0;

cout<<"ingrese una cadena de caracteres: "<<endl;
cin.getline(cad,50,'\n');

cout<<"ingrese un caracter: "<<endl;
cin>>car;


for (int i=0; i<50; i++){
	
	if (cad[i] == car)
	{
	NUM++;
	}
}

cout<<"el numero de caracteres " << car<< " es:"<<endl;
cout<<NUM;

return 0;
}
