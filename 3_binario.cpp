#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int trans_binario(int decimal)
{
    short binario[8];
    int b8, b7, b6, b5, b4, b3, b2, b1;
   
	for(int i=0; i<8; i++)   //transformar el numero
	{
		binario[i] = decimal % 2;
		decimal /= 2;
	}
	cout << "el numero binario es: ";

	for (int i=7; i >=0; i-- )   //muestra el número binario 
	{
		cout<< binario [i];	
	}
	cout<<endl;
	b8= binario[7];b7= binario[6];b6=binario[5];b5=binario[4];
	b4=binario[3];
	b3=binario[2];b2=binario[1];b1=binario[0];  //Variable independiente
	
	printf("%d %d %d %d %d %d %d %d", b8, b7, b6, b5, b4, b3, b2, b1);   //se muestra por pantalla por separado

	cout<<endl;
	for (int i=7;i>=0; i--)
{
	if (binario[i]== 0)
		{
		
		printf("El LED %d esta OFF \n",8-i);
		
		}
	else
		{
		printf("El LED %d esta ON \n",8-i);
		}
	}
	
	cout<<endl;
	return 0;
         
}

int main() {
	
    int numeros[256];
    srand(time(NULL));
    
	for (int i=0; i<256; i++)    
	{
	
		numeros[i]= rand()% 255;
		cout<<"El numero es: ";
		cout<< numeros[i];	
		cout<<endl;
		trans_binario(numeros[i]);
	}
	
	
    return 0;
}
