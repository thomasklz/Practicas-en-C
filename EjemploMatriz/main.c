#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// imprimir un vector bidimencional
	int C[3][6] = {{6, 23, 8, 4, 11, 33}, {21, 0, 6, 10, 23, 4}, {8, 2, 1, 6, 9, 15}};
	int f, c;
	for(f=0;f<3;f++){
			for(c=0;c<6;c++){
				printf("%i \t",C[f][c]);
			}
			printf("\n");
		}
	
	return 0;
}
