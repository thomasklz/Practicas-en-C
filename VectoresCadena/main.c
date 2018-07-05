#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char micadena1[10]={'h','0','l','a','\0' } ;
	char micadena2[50]="que tal";
	int i;
	

	char *micadena3[]={"Thomas","Loor","Vera"};
	printf("Su nombre es: ");
	for (i=0;i<3;i++){
		
		printf("%s \t", micadena3[i]);
		
	}

	printf("\n\n\n\n\n");
	puts(micadena1); //imprime : hola
	puts(micadena2); //imprime : que tal
	
	puts("Introduzca su nombre por favor:");
	gets(micadena1);
	
	strcat(micadena2," estás?");
	strcat(micadena2, micadena1);
	
	puts(micadena2);

	return 0;
}
