#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float kilometro, metros;
	printf("Ingrese los Kilometros \n");
	scanf("%f", &kilometro);
	metros = kilometro * 1000 ;
	printf("La transformacion de kilometros a metros es: %.2f m", metros);
	
	return 0;
}
