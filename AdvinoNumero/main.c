#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int numeroRand= rand()%10;
	printf("El valor es %d", numeroRand);
	return 0;
}
