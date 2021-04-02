
#include <iostream>
using namespace std;

int main() {
  	unsigned int CLA, CAT, ANT, RES;
	float SAL; //Salario
	
	cout << "Ingrese la clave del trabajador" <<endl;
	cin >> CLA;
	cout << "Ingrese la categoria del trabajador" <<endl;
	cin >> CAT;
	cout << "Ingrese la antiguedad del trabajador" <<endl;
	cin >> ANT;
	
	if (CAT == 2) 
	{
		if (ANT >= 7)
		{
			RES = 1;
		printf( "%d.El empleado de clave %d reune las condiciones necesarias para el puesto.\n", RES, CLA);
		}
		else
		{
			RES = 0;
			printf( "%d.El empleado de clave %d NO reune las condiciones necesarias para el puesto.\n", RES, CLA);
		}
	}
	else if (CAT == 3)
		{
			if (ANT >= 5) 
			{
				RES = 1;
				printf( "%d.El empleado de clave %d reune las condiciones necesarias para el puesto.\n", RES, CLA);
			}
			else
			{
			RES = 0;
			printf( "%d.El empleado de clave %d NO reune las condiciones necesarias para el puesto.\n", RES, CLA);
			}
		}
		else if (CAT == 4)
		{
			if (ANT >= 5) 
			{
				RES = 1;
				printf( "%d.El empleado de clave %d reune las condiciones necesarias para el puesto.\n", RES, CLA);
			}
			else
			{
			RES = 0;
			printf( "%d.El empleado de clave %d NO reune las condiciones necesarias para el puesto.\n", RES, CLA);
			}
		}
		
		else 
		{
			RES = 0;
			printf( "%d.El empleado de clave %d No reune las condiciones necesarias para el puesto.\n", RES, CLA);
		}

	return 0;
}


	
