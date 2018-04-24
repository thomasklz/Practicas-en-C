#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	 int num1, num2, total;
	 printf("Ingrese el primer numero \n");
	 scanf("%i", &num1);
	 printf("Ingrese el segundo numero \n");
	 scanf("%i", &num2);
	 total= num1 + num2;
	 printf("La suma es : %i", total);

	return 0;
}
