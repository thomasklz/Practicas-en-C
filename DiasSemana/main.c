#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("Ingrese un numero \n");
	scanf("%i", &num);
	switch(num){
		case 1:
		printf("Hoy es lunes");
		break;
		case 2:
		printf("Hoy es martes");
		break;
		case 3:
		printf("Hoy es miercoles");
		break;
		case 4:
		printf("Hoy es jueves");
		break;
		case 5:
		printf("Hoy es viernes");
		break;
		case 6:
		printf("Hoy es sabado");
		break;
		case 7:
		printf("Hoy es domingo");
		break;
		default:
			printf("Pro favor, ingrese un numero entre 1 y 7");
					
	}
	return 0;
}
