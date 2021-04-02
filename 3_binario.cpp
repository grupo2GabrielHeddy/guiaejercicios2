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
	cout << "el numero en binario: ";

	for (int i=7; i >=0; i-- )   //muestra el número binario 
	{
		cout<< binario [i];	
	}
	cout<<endl;
	b8= binario[7];b7= binario[6];b6=binario[5];b5=binario[4];
	b4=binario[3];
	b3=binario[2];b2=binario[1];b1=binario[0];  //Variable independiente
	
	printf("%d %d %d %d %d %d %d %d", b1, b2, b3, b4, b5, b6, b7, b8);   //mostralo por separado

	cout<<endl;
	for (int i=0;i<8; i++)
{
	if (binario[i]== 0)
		{
		
		printf("El LED %d esta OFF \n", i+1);
		
		}
	else
		{
		printf("El LED %d esta ON \n", i+1);
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
		cout<<"El numero ";
		cout<<i+1;
		cout<< " es: ";
		cout<< numeros[i];
		cout<<endl;
		trans_binario(numeros[i]);
	}
	
	
    return 0;
}
