#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int year;
	printf("Introduzca un year \n") ;
	scanf("%i",&year);

	if(((year%4==0) && (year%100!=0)) || (year%400==0)){
	 		printf("El year es Bisiesto");
	 		
		}else{
				printf("El year no es Bisiesto");
	}

	return 0;
}
