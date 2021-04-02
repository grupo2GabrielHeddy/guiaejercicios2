#include <stdio.h>

int main ()
{
	int S;
	float fa, celsius;
	printf ("¿Cuantas veces sono la chichara?\n");
	scanf ("%d",&S);
	fa=S/4+40;
	celsius=(fa-32)*5/9;
	printf ("Temperatura: %.2f  grados celsius\n",celsius);
	return 0;
}
