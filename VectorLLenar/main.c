#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vector[5],j, i,k,contador=0,numero, posicion;
	
	for(i=0;i<5;i++){
		vector[i]=0;	
	}
	
	while(contador!=5){
	z:
	for(k=0;k<5;k++){
		if(vector[k]==0){
			printf("La pisicion %i esta disponible \n",k);	
		}	
	}
	printf("Ingrese una  pisicion entre [0-4]\n");
	scanf("%i",&posicion);
	 if(posicion>=5){
	 	system("cls");
	 	printf("------- ERROR - Posicion %i incorrecta ---------\n",posicion);
	 	goto z;
	 }
	 if(vector[posicion]==0){
	 	printf("Ingrese un numero\n");
		scanf("%i",&vector[posicion]);
	 	system("cls");
	 }else{
	 	system("cls");
	 	printf("------- ERROR - La posicion %i esta ocupada ----------\n",posicion);
	 	goto z;
	 }
	contador++;
	}
	
	for(j=0;j<5;j++){
		printf("El numero en la pisicion %i:%i\n",j,vector[j]);	
	}
		
	return 0;
}
