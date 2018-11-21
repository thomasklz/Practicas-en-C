#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int op;
	char N[999][30];
	int  k,i=0,j=500;
	
	I:
	
	
	printf("**Lista de estudiantes Universitarios**\n\n");
	printf("Elija una opcion:\n");
	printf("1) Primer semestre\n");
	printf("2) Segundo semestre\n");
	printf("3) Imprimir \n");
	printf("4) salir \n");	
	printf(" opcion: ");
	scanf("%i",&op);
	switch(op){
		case 1:
			printf("Primer semestre:\n\n");
			printf("Ingrese el nombre del estudiante\n");
					scanf("%s",& N[i]);
					printf("Ingrese la nota\n");
					i++;
					scanf("%s",& N[i] );
				i++;
			goto I;
		
		break;
		case 2:
			printf("Segundo semestre\n\n");
			printf("Ingrese el nombre del estudiante\n");
					scanf("%s",& N[j]);
					printf("Ingrese la nota\n");
					j++;
					scanf("%s",& N[j] );
		    j++;
			goto I;	
		break;	
		case 3:
			printf("--------------------------------------------------\n");
	    	printf("       Primer semestre               \n\n ");
	    	printf("nombre               nota            \n");		
		 for(k=0;k<i;k++){
			
				printf(" %s", N[k]);printf("        \t\t");k++; printf("%s", N[k]);
			
				printf("\n");
				
			}
			printf("\n");
			printf("--------------------------------------------------\n");
			
			printf("      segundo semestre              \n\n ");
	    	printf("nombre               nota            \n");	
		 for(k=500;k<j;k++){
			
				printf(" %s", N[k]);printf("        \t\t");k++; printf("%s", N[k]);
			
				printf("\n");
				
			}
			
			
		break;
			
			
}
	
	
//	getch();
	return 0;
}

