#include <stdio.h>
#include <math.h>



//funcion para calcular la media aritmetica
float promedio(float *notas, int n)
{
    float media=0;
    for (int i = 0; i < n; ++i)
    {
        media+=notas[i];
    }
    media=media/n;
    return media;
}

//funcion para calcular varianza
float varianza(float *notas, float media, int n)
{
    float varianza=0;
    for (int i=0;i<n;++i)
    {
        varianza+=pow(notas[i]-media,2);
    }
    varianza=varianza/n;
    return varianza;
}

//funcion para obtener moda
int moda(float* notas, int n)
{
    int m=0;
    for (int i = 0; i < n; ++i)
    {
       int s=0;
       for (int j = 0; j < n; ++j) //cuento las veces que se repite cada termino
       {
           if (notas[i]==notas[j] && i!=j)
           {
               s=++s;
           }
       }
       if (s>=m)
       {
           m=i; //guarda el lugar donde se encuentra el dato moda
       }
    }
    return m;
}

int main()
{
//Notas de prueba
  float notas[]={3.5,6.3,3.3,2.0,6.3};
//tamaño del vector en caso de ingresar las notas de otra forma
  int n=(sizeof(notas))/sizeof(notas[0]);
//mostrando las notas por pantalla antes de todo
  printf("\n----------------------------------------------------------------------------------------\n");
  printf("Las notas del alumno son:\n");
  for(int i=0;i<n;++i)
  {
    printf("%.1f\t",notas[i]);
  }
//llamado de funciones
  float aritmetica=promedio(notas,n);
  float var=varianza(notas,aritmetica,n);
  float std=sqrt(var);
  int a=moda(notas,n);
//impresion por pantalla
  printf("\n------------------------------------------------------------------------------------\n");
  printf("el promedio de notas es: %.2lf\n",aritmetica);
  printf("la varianza de las notas es: %.4lf\n",var);
  printf("la desviación estandar de las notas es: %.4lf\n", std);
  printf("la moda es: %f\n", notas[a]);
  return 0;
}
