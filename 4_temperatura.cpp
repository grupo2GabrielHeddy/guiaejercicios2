#include <stdio.h>      
#include <stdlib.h>
#include <time.h>


//generador de valores de temperatura
float *temp(float x)
{
    static float t[1000];
    
    //semilla
    srand ((unsigned)time(NULL));
    
    for (int i=0; i<x;++i)
    {
        t[i]=((float)rand())/((float)RAND_MAX)*20+15; //genera un numero entre 15 y 35;
        printf("%d:00 = %.2f\n",i,t[i]);
    }
    return t;
}

//media
void media (float dato[],int n)
{
    float promedio=0;
    int i;
    for(i=0;i<n;++i)
    {
        promedio+=dato[i];
    }
    promedio=promedio/n;
    printf("\n\nTemperatura media: %.2f %cC\n",promedio,248);
}

//min
void min(float dato[], int n)
{
	float min=dato[0]; //deja al primer dato como el minimo
	int a,i; 
	for (i=0; i<n; ++i) //revisa cada dato
	{
		if(dato[i]<min)
			{
				min=dato[i]; // si le dato en el que estamos es menor al anterior lo reemplaza
				a=i; //guarda la posicion
			}
	}
	printf("Temperatura minima: %.2f %cC a las %d:00 hrs\n",min,248,a);
}

//max 
void max(float dato[], int n)
{
	float max=dato[0]; //deja el primer dato como el maximo
	int i,b;
	for (i=0; i<n; ++i) //revisa cada dato
	{
		if(dato[i]>max)
			{
				max=dato[i]; // si le dato en el que estamos es menor al anterior lo reemplaza
				b=i;
			}
	}
	printf("Temperatura maxima: %.2f %cC a las %d:00 hrs\n",max,248,b);
}



int main() 
{
    int n=24;
    float *T;
    T=temp(n); //generador de temperaturas
    media(T,n); //temperatura promedio
    min(T,n); //minimo 
    max(T,n); //maximo
    return 0;
}
