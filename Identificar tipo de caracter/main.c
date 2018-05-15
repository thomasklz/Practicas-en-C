#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char car;
	printf("Por favor ingrese un caracter \n");
	scanf("%c", &car);
	if((car=='a' )|| (car=='e' )||(car=='i' )||(car=='o' )||(car=='u')){
		printf("El caracter ingresado es una vocal");
	}else if(car=='b' || car=='c'|| car=='d'|| car=='f'|| car=='g'|| car=='h'|| car=='j'|| car=='k'|| car=='l'|| car=='m'|| car=='n'|| car=='ñ'|| car=='p'|| car=='q'|| car=='r'|| car=='s'|| car=='t'|| car=='v'|| car=='w'|| car=='x'|| car=='y'|| car=='z'){
		printf("El caracter ingresado es una consonante");
	}else{
		printf("El caracter ingresado es una numero");
	}
	getch();
	return 0;
}
