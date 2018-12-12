#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vector[9],i,j, par=0, impar=0;
	
	for(i=0; i<10;i++){
		printf("Ingrese un numero: \n");
		scanf("%i",&vector[i]);
	}
	system("cls");
	for(j=0; j<10; j++){
		if(vector[j]%2==0){
			par++;
			printf("\nPARES: %i",vector[j]);
		}else{
			impar++;
		}
	}
	printf("\nLos pares son:%i",par);	
	printf("\nLos impares son:%i",impar);	

	return 0;
}
