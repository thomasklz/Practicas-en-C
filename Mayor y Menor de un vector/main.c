#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vector[5]={15,6,4,3,22};
	int  j,i, a=0,b=0;
		for(j=0;j<4;j++){
			if(vector[a]>vector[j+1]){
				a=a;
				}else{
				a=j+1;
			}
		}
		printf("El numero mayor es %i \n", vector[a]);

		for(i=0;i<4;i++){
			if(vector[b]<vector[i+1]){
				b=b;
				}else{
				 b=i+1;
			}
		}
		printf("El numero menor es %i \n", vector[b]);
	
	return 0;
}
