#include<stdio.h>
#include<stdlib.h>

int suma(int R1, int R2, int R3, int R4, int R5)
{
    return R1+R2+R3+R4+R5;
}

void main()
{
int R1, R2, R3, R4, R5;
    printf("Introduzca los valores de la resistencia:\n");
    printf("Resistencia 1: ");
		scanf("%d",&R1);
    printf("Resistencia 2: ");
		scanf("%d",&R2);
    printf("Resistencia 3: ");
		scanf("%d",&R3);
    printf("Resistencia 4: ");
		scanf("%d",&R4);
    printf("Resistencia 5: ");
		scanf("%d",&R5);
int RT=suma(R1,R2,R3,R4,R5);
    printf("Los valores de las resistencias son, en orden: %d, %d, %d, %d, %d, y la resistencia total es %d",R1,R2,R3,R4,R5,RT);
}
