#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,num,sumaTotal=0,sumaPar=0,sumaImpar=0;
	
	for (i=1;i<=4;i++){
		
		printf("Ingrese un numero \n");
		scanf("%i",&num);
		
		sumaTotal=sumaTotal+num;
		
		if (num%2==0 ){
		    sumaPar=sumaPar+num;
		}      
	    else{
	    	sumaImpar=sumaImpar+num;	
		}
		
	}
	 printf("La suma total es: %i \n",sumaTotal );
	 printf("La suma Par es: %i \n",sumaPar );
	 printf("La suma Impar es: %i \n",sumaImpar );

	return 0;
}
