#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vector[10]={4,7,1,10,6,15,10,2,18,8};
	int i, max=vector[0],min=vector[0];
	for(i=0;i<10;i++){
		if(vector[i]%2==0){
			if(vector[i]<min){
				min =vector[i];
			}
		}else{
			if(vector[i]>max){
				max=vector[i];
			}
		}
	}
		printf("\n el numero menor de los pares es: %i", min);
		printf("\n el numero mayor de los impares es: %i", max);
	return 0;
}
