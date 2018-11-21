#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		int numero,sumaPar, sumaImp,contador=1;
		do{
		   printf ("ingrese un numeros:");
		   scanf("%i",&numero);
		   if(numero%2==0){
			   sumaPar=sumaPar+numero;	
			}else{
				sumaImp=sumaImp+numero;
			}
			contador++;
		}while(contador<=10);
		
		printf ("Suma par  %i:", sumaPar);
		printf ("\nSuma impar %i:", sumaImp);
		
	
		
		
		
	return 0;
}
