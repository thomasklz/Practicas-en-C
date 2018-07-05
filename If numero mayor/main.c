#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("Ingrese un numero \n");
	scanf("%i",&num);
	if(num>10){
		printf("El numero es mayor a 10");
	}
	getch();
	return 0;
}
