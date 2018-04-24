#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char palabra;
	
	printf("Ingrese una palabra \n");
	scanf("%c", &palabra);
	printf("La primera letra de esa palabra es: %c", palabra);
	
	return 0;
}
