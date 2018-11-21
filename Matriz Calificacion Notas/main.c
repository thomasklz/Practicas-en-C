#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *nota[3][3];
	char ayuda[20];
	int op, f=0, i, j;
	do{
		
		printf("Elija una opcion \n");
		printf("1) Primer Nivel \n");
		printf("2) Segundo Nivel \n");
		printf("3) Mostrar por Nivel \n");
		printf("4) Salir \n");
		scanf("%i",&op);
		switch(op){
			case 1:
				printf("Ingrese el nombre del estudiante \t");
				//scanf("%s",&nota[f][0]);
				scanf("%s",&ayuda);
				printf("%s",ayuda);
				nota[f][0]=ayuda;
//				printf("Ingrese la nota del estudiante \t");
//				scanf("%s",&nota[f][1]);
				break;
			case 2:
				printf("Ingrese el nombre del estudiante \t");
				scanf("%s",&nota[f][0]);
				printf("Ingrese la nota del estudiante \t");
				scanf("%s",&nota[f][1]);
				break;
			case 3:
				 for(i=0; i<2;i++){
				 	for(j=0; j<2;j++){
				 		printf("%s",nota[i][j]);
					 }
					 printf("\n");
				 }
				break;			
		}
	
		f+=1;	
	}
	while(op!=4) ;
	
	return 0;
}
