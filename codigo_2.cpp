#include <iostream>
#include <string.h>

using namespace std;

int main()
{
//Variables ---------------------------------------------------
	char cad[50];
	short int i,j;

//Word Reading-------------------------------------------------
	cout << "Write the sentence: "<<endl;
    cin >>  cad;

//Screen-------------------------------------------------------

	i=0;
do{
	if (cad[i]=='0') 
	{
		i+=2;
	}else if (cad[i]=='1') 
	{
		cout<<cad[i+1];
		i+=2;
	}else if (cad[i]=='2') 
	{
		for(j=0;j<2;j++)
		{
			cout<<cad[i+1];
		}
		i+=2;
	}else if (cad[i]=='3') 
	{
		for(j=0;j<3;j++)
		{
			cout<<cad[i+1];
		}
		i+=2;
	}else if (cad[i]=='4') 
	{
		for(j=0;j<4;j++)
		{
			cout<<cad[i+1];
		}
		i+=2;
	}else if (cad[i]=='5') 
	{
		for(j=0;j<5;j++)
		{
			cout<<cad[i+1];
		}
		i+=2;
	}else if (cad[i]=='6') 
	{
		for(j=0;j<6;j++)
		{
			cout<<cad[i+1];
		}
		i+=2;
	}else if (cad[i]=='7') 
	{
		for(j=0;j<7;j++)
		{
			cout<<cad[i+1];
		}
		i+=2;
	}else if (cad[i]=='8') 
	{
		for(j=0;j<8;j++)
		{
			cout<<cad[i+1];
		}
		i+=2;
	}else if (cad[i]=='9') 
	{
		for(j=0;j<9;j++)
		{
			cout<<cad[i+1];
		}
		i+=2;
	}else 
	{
		cout<<"There is an error in the array ";
		i+=2;
		break;
	}
}while(cad[i]!='\0');
	return 0;
}
