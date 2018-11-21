#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int op, num1, num2;
	printf("1) Suma \n");
	printf("2) Resta \n");
	printf("3) Miltiplicacion \n");
	printf("4) Division \n");
	printf("Elije una opcion: ");
	scanf("%i",&op);
	printf("Ingrese un numero entero\n");
	scanf("%i", &num1);
	printf("Ingrese otro numero entero\n");
	scanf("%i", &num2);
	
	switch(op){
		case 1:
				printf("La suma : %i",num1 + num2 );
				break;
		case 2: 
				printf("La resta es: %i", num1 - num2);
				break;
		case 3:
				printf("La multiplicacion : %i",num1 * num2 );
				break;
		case 4:
				printf("La division : %i",num1 / num2 );
				break;
						
	
	}
	return 0;
}
