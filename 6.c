#include<stdio.h>
#include<stdlib.h>

float calculo(float a)
{
				return a/8;
}

void main()
{
float a, resul;
		printf("Introduzca el numero cuya octava parte desea conocer\n");
			scanf("%f",&a);
				resul=calculo(a);
		printf("La octava parte del numero introducido es %f",resul);
}
