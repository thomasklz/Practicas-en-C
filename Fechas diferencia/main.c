#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dia1, mes1, year1, dia2, mes2, year2;
	x:
	printf("\n Ingrese un dia 1: ");
	scanf("%i", &dia1);
	if((dia1>0)&&(dia1<=30)){
	}else{
		printf("Los dias solo se validan por 30 ");
		goto x;
	}
		
	y:
	printf("Ingrese otro dia 2: ");
	scanf("%i", &dia2);
	if((dia2>0)&&(dia2<=30)){
	}else{
		printf("Los dias solo se validan por 30 ");
		goto y;
	}
	
	z:
	printf("Ingrese un mes: ");
	scanf("%i", &mes1);
	if((mes1>0)&&(mes1<=12)){	
	}else{
		printf("El año solo tiene 12 meses ");
		goto z;
	}
	c:
	printf("Ingrese otro mes: ");
	scanf("%i", &mes2);
	if((mes2>0)&&(mes2<=12)){	
	}else{
		printf("El año solo tiene 12 meses ");
	goto c;
	}
	
	printf("Ingrese un año: ");
	scanf("%i", &year1);
	
	printf("Ingrese otro año: ");
	scanf("%i", &year2);
	
	printf("\nLa diferencia en dias es: %i", (dia2-dia1));
	printf("\nLa diferencia en meses es: %i", (mes2-mes1)*12);
	printf("\nLa diferencia en años es: %i", (year2-year1)/360);
	printf("L diferencia en dias es: %i", (dia2-dia1)+((mes2-mes1)*12)+((year2-year1)/360));
	
	return 0;
}
