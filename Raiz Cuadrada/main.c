#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n;
    printf("Ingrese un numero: \n");
    scanf("%f",&n);
    n = sqrt(n);
    printf("Raiz cuadrada: %.2f\n",n);
	
	return 0;
}
