#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, num3,op,numImpares=0,numPares=0;
	printf("Ingrese 3 numero\n");
	scanf("%i %i %i", &num1, &num2, &num3);
		printf("1) Promedio\n");
		printf("2) Numero mayor \n");
		printf("3) Numero menor \n");
		printf("4) Par e Impar \n");
	printf("elija una opcion\n");
	scanf("%i",&op);	
	switch(op){
		case 1:
			 	printf("El promedio es %i", (num1+num2+num3)/3);
			 	break;
		case 2:
				if(num1 > num2 && num1 > num3){
					printf("El numero mayor es %i", num1);
				}else if (num2 > num3){
				   printf("El numero mayor es %i", num2);
				}else{
					printf("El numero mayor es %i", num3);
				}
				break;
		case 3:
				if(num1 < num2 && num1 < num3){
					printf("El numero menor es %i", num1);
				}else if (num2 < num3){
				   printf("El numero menor es %i", num2);
				}else{
					printf("El numero menor es %i", num3);
				}
				break;
		case 4:
				if(num1%2==0){
					numPares++;
				}else{
					numImpares++;
				}		 			 	
				if(num2%2==0){
					numPares++;
				}else{
					numImpares++;
				}
				if(num3%2==0){
					numPares++;
				}else{
					numImpares++;
				}
				printf("Total numero pares %i\n", numPares);
				printf("Total numero impares %i", numImpares);
				break;
				
	}
	
	
	return 0;
}
