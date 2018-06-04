#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2,op;
    printf("Bienvenidos a mi calculadora basica \n");
     printf(":::::::::: THOMAS ::::::::::: \n \n \n");
	printf("Ingrese un numero \n");
	scanf("%i", &num1);
	printf("Ingrese otro numero \n");
	scanf("%i", &num2);
	printf("Seleccione una opcion, que desea hacer con los dos numero \n");
	printf("1) Suma \n");
	printf("2) Restar \n");
	printf("3) Multiplicar \n");
	printf("4) Dividir \n");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			printf("El resultado de la suma es : %i", num1 + num2);
			break;
		case 2:
			printf("El resultado de la suma es : %i", num1 - num2);
			break;
		case 3:
			printf("El resultado de la multiplicar es : %i", num1 * num2);
			break;	
		case 4:
			printf("El resultado de la suma es : %i", num1 / num2);
			break;	
		default:
		   printf("Opcion no valida");	
	}
	return 0;
}
