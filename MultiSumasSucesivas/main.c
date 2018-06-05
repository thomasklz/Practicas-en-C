#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1,num2,contador;
	printf("Multiplicacion de dos numeros por sumas\n");
	printf("Introduzca numero: ");
	scanf("%d", &num1);
	printf("introduzca segundo numero: ");
	scanf("%d", &num2);
	contador=1;
	while (contador<=num2)
	{
		num1=num1*num2;
		printf("\nIteracion %d: Resultado= %d", contador,num1);
		contador++;
	}
	printf("\nEl resultado es %d\n", num1);
	return 0;
}
