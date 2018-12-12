#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vector[4],i,numero;
	for(i=0;i<5;i++){
		printf("Ingrese un numero\n");
		scanf("%i",&numero);
		printf("Ingrese la posicion");
		scanf("%i",vector[i]);
	}
	return 0;
}
