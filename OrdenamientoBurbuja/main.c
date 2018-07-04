#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vectorA[5]={8,2,4,7,5}, vectorB[5], vectorC[5],i,j,bandera;
	
	printf("*** Algoritmo de ordenamiento Burbuja ***\n\n");
	for (i=0;i<5;i++){
		vectorB[i]=vectorA[i]*2;
		vectorC[i]=vectorB[i];
		printf("VectorA Indice[%i]  %i \t VectorB Indice[%i] %i\n ",i, vectorA[i],i,vectorB[i]);
	}
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			bandera = vectorC[j];
			if(bandera>vectorC[j+1]){
				vectorC[j]=	vectorC[j+1];
				vectorC[j+1]=bandera;			
			}
		}
	}
	printf("\n\nVectorC ordenado de forma ascendente\n");
	for (i=1;i<=5;i++){
		printf("%i \t",vectorC[i]);
	}
	
	return 0;
}
