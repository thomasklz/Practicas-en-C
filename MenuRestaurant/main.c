#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int op,opcomida;
	float subtotal=0;
	printf("xxxxxxxxxxxx Restaurant Informatico xxxxxxxxxxxxxxxxxx \n");
	printf("xxxxxxxxxxxxxxxxx Menu del Dia xxxxxxxxxxxxxxxxxxxx\n");

	do{
		printf(" 1) Primer plato \n");
		printf(" 2) Segundo plato \n");
		printf(" 3) Jugo \n");
		printf(" 4) Nuevo pedido \n");
		printf(" 5) Facturar  \n");
		printf(" 6) Salir  \n");
		scanf("%i",&op);
		switch(op){
			case 1:
				    printf(" 1) Caldo de pollo  -----  $0,75 \n");
					printf(" 2) Caldo de verde  -----  $1,00 \n");
					printf(" 3) Sopa de lentaja -----  $0,90 \n");
					scanf("%i",&opcomida);
					switch(opcomida){
						case 1 :
								subtotal += 0.75;
								break;
						case 2 :
								subtotal += 1.00;
								break;
						case 3 :
								subtotal += 0.90;  
								break;		 
					}
				break;		
			case 2:
				    printf(" 1) Seco de pollo  -----  $1,25 \n");
					printf(" 2) Seco de verde  -----  $1,50 \n");
					printf(" 3) Arroz con atun -----  $1,10 \n");
					scanf("%i",&opcomida);
					switch(opcomida){
						case 1 :
								subtotal += 1.25;
								break;
						case 2 :
								subtotal += 1.50;
								break;
						case 3 :
								subtotal += 1.10;  
								break;		 
					}
				break;		
			case 3:
				    printf(" 1) Jugo de limon   -----  $0,50 \n");
					printf(" 2) Jugo de sandia  -----  $0,50 \n");
					printf(" 3) Jugo de naranja -----  $0,50 \n");
					scanf("%i",&opcomida);
					switch(opcomida){
						case 1 :
								subtotal += 0.50;
								break;
						case 2 :
								subtotal += 0.50;
								break;
						case 3 :
								subtotal += 0.50; 
								break;		 
					}				
			 	break;
			case 4:
					system("cls");
					subtotal=0;
					printf("xxxxxxxxxxxx Restaurant Informatico xxxxxxxxxxxxxxxxxx \n");
					printf("xxxxxxxxxxxxxxxxx Menu del Dia xxxxxxxxxxxxxxxxxxxx\n");
				break;
			case 5:
					printf("xxxxxxxxxxxx ---------------- xxxxxxxxxxxxxxxxxx \n");
					printf("Subtotal %f \n", subtotal);
					printf("Iva %f \n", subtotal*0.12);
					printf("Total %f \n", subtotal + (subtotal*0.12));
					printf("xxxxxxxxxxxx ---------------- xxxxxxxxxxxxxxxxxx \n");
					printf("xxxxxxxxxxxx Restaurant Informatico xxxxxxxxxxxxxxxxxx \n");
					printf("xxxxxxxxxxxxxxxxx Menu del Dia xxxxxxxxxxxxxxxxxxxx\n");
					subtotal=0;
					
				break;	
		}
		
		
	}while(op!=6);

	
	return 0;
}
