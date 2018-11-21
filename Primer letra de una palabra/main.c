#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char numero[4];
	printf("Ingrese un valor de 4 digitos: ");
	scanf("%s", &numero);
	
	printf("Digito-1: %c \n", numero[0]);
	printf("Digito-2: %c \n", numero[1]);
	printf("Digito-3: %c \n", numero[2]);
	printf("Digito-4: %c \n", numero[3]);
	
	return 0;
}
