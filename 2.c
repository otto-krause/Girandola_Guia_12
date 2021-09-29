#include<stdio.h>
#include<stdlib.h>

int calculoarea(int a, int b)
{
			return (a*b);
}

int calculoperim(int a, int b)
{
			return (a*2)+(b*2);
}

void main()
{
    int a, b, area, perim;
    printf("Introduzca los lados del rectangulo cuyo area y perimetro desea conocer\n");
    printf("Lado 1: ");
		scanf("%d",&a);
    printf("Lado 2: ");
		scanf("%d",&b);
			area=calculoarea(a,b);
	printf("El area del rectangulo es %d\n",area);
			perim=calculoperim(a,b);
    printf("El perimetro del rectangulo es %d\n",perim);
}
