#include <iostream>
using namespace std;


// VARIABLES
	static char at[512];
	int at_counter,aux_counter,k;
	char aux[101];
//PROGRAMM	
int main()
{
	cout<<"Enter the data "<<endl;
	cin>>at;
//Recongnize  7E as a header
	do {
		if((at[at_counter]=='7' && at[at_counter+1]=='E') and at[at_counter]!='\0')
		{
		aux_counter=at_counter+2;	
		//saves the frame in an auxiliar array
		k=0;
			while(((at[aux_counter] !='7' || at[aux_counter+1] !='E') && at[aux_counter] != '\0'))
			{
				aux[k]=at[aux_counter];
				aux_counter++;
				k++;
			}
			if(aux[15]=='5'){
				cout << "Temperature: " << aux[17]<<aux[18]<<" degrees"<<endl;
			}
			if(aux[15]=='7'){
				cout << "Humidity: " << aux[17]<<aux[18]<<"."<<aux[19]<<"%"<<endl;
			}
			at_counter=at_counter+k;
		}
		else{
			at_counter++;
		}
	}while(at[at_counter]!='\0');

	return 0;
}
