#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vectorA[5]={8,2,4,7,5},i,j,bandera,temporal;
	
	printf("*** Algoritmo de ordenamiento por seleccion ***\n\n");
	
	for (i=0;i<5;i++){
		bandera = i;
		for (j=i+1;j<5;j++){
			if(vectorA[j]<vectorA[bandera]){
				bandera=j;			
			}
		}
		temporal=vectorA[i];
		vectorA[i]=vectorA[bandera];
		vectorA[bandera]=temporal;
	}
	printf("\n\nVectorA ordenado de forma ascendente\n");
	for (i=0;i<5;i++){
		printf("%i \t",vectorA[i]);
	}
	
	return 0;
}
