#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, num, suma=0;
	 
	printf("Introduzca el numero a evaluar: ");
	scanf("%i", &num);
	 
	for(i=1; i<num; i++) {

		if(num%i==0) {
			suma+=i;
		}
	}
	if(suma==num){
		printf("El numero %i es perfecto.\n", num);
	}else{
		printf("El numero %i NO es perfecto.\n", num);
	}

	return 0;
}
