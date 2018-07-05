#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int opc,opc2,opc3;
	float subto=0,tot,rtot,iva;
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxx restaurante informatico Bryan xxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("____________________________________________________________________________________\n");
	printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx menu del dia xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
	do{
	printf("\n\n1).....Primer Plato\n");
	printf("2).....Segundo Plato\n");
	printf("3).....Jugos\n");
	printf("4).......Nuevo Pedido\n");
	printf("5)......Facturar\n");
	printf("6).......Salir\n\n");
	
	printf("Elija la Opcion que desea adquirir");
	scanf("%i",&opc);
		switch(opc){
			case 1:system("cls");
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxx restaurante informatico Bryan xxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("____________________________________________________________________________________\n");
	printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx menu del dia xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
			    printf("\n......ELIJA la sopa que desea servirse\n");
				printf("1)---caldo de pollo :$0,75\n");
				printf("2)---caldo de verde :$1,00\n");
				printf("3)---caldo de lenteja:$0,90\n");
				printf("Que opcion desea:");
				scanf("%i",&opc2);
				switch(opc2){
			    	case 1:
				 		
						subto+=0.75;
						tot=subto*0.12;
						printf("valor a pagar hasta ahora: %.2f\n",subto);
						printf("El valor a pagar con iva hasta ahora %2.f",tot);
						break;
					case 2:
						
						subto+=1.00;
						tot=subto*0.12;
						printf("valor a pagar hasta ahora: %.2f\n",subto);
						printf("El valor a pagar con iva hasta ahora %2.f",tot);
						break; 
					case 3:
						
					    subto+=0.90;
						tot=subto*0.12;
						printf("valor a pagar hasta ahora: %.2f\n",subto);
						printf("El valor a pagar con iva hasta ahora %2.f",tot);
						break;
					default:	
						printf("Error al elegir la opcion\n");		
				} 
				break; 
			case 2:system("cls");
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxx restaurante informatico Bryan xxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("____________________________________________________________________________________\n");
	printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx menu del dia xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");	 
	            printf("\n.....Elija el seco que desea servirse\n");
	            printf("1)---seco de pollo  :$1,25\n");
	            printf("2)---arroz con atun  :$1,10\n");
	            printf("3)---seco de pescado  :$1,50\n");
	            printf("Que opcion desea: ");
	            scanf("%i",&opc2);
	            switch(opc2){
	            	case 1:
	            		subto+=1.25;
	            		tot=subto*0.12;
	            		printf("valor a pagar hasta ahora: %.2f\n",subto);
	            		printf("El valor a pagar con iva hasta ahora: %2.f",tot);
	            		break;
	            	case 2:
				    	subto+=1.10;
	            		tot=subto*0.12;
	            		printf("valor a pagar hasta ahora: %.2f\n",subto);
	            		printf("El valor a pagar con iva hasta ahora: %2.f",tot);
	            		break;
					case 3:
						subto+=1.50;
	            		tot=subto*0.12;
	            		printf("valor a pagar hasta ahora: %.2f\n",subto);
	            		printf("El valor a pagar con iva hasta ahora: %2.f",tot);
	            		break;
					default:
						printf("Error a elegir la opcion \n");	
				}
	            break;
	        case 3:system("cls");
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxx restaurante informatico Bryan xxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("____________________________________________________________________________________\n");
	printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx menu del dia xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
		        printf("\n.....Elija el jugo que desea servirse\n");
				printf("1)---jugo de limon   :$0,50\n");
				printf("2)---jugo de sandia  :$0,50\n");
				printf("3)---jugo de naranja  :$0,50\n");
				printf("Que opcion desea: ");
				scanf("%i",&opc2);
				switch(opc2){
					case 1:
						subto+=0.50;
						tot=subto*0.12;
						printf("valor a pagar hasta ahora: %.2f\n",subto);
						printf("El valor a pagar con iva hasta ahora: %2.f",tot);
						break;
					case 2:
						subto+=0.50;
						tot=subto*0.12;
						printf("valor a pagar hasta ahora: %.2f\n",subto);
						printf("El valor a pagar con iva hasta ahora: %2.f",tot);
						break;
					case 3:
						subto+=0.50;
						tot=subto*0.12;
						printf("valor a pagar hasta ahora: %.2f\n",subto);
						printf("El valor a pagar con iva hasta ahora: %2.f",tot);
						break;
					default:
						printf("Error a elegir la opcion :\n");
				}
				 break;
			case 4:
				subto=0;
				system("cls");
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxx restaurante informatico Bryan xxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("____________________________________________________________________________________\n");
	printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx menu del dia xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
	             break;
	        case 5:
			     system("cls");
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxx restaurante informatico Bryan xxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("____________________________________________________________________________________\n");
	
	            printf("DIRRECCION : ESPAM MFL\n");
				printf("TELF: (05)2435797\n");
				printf("SU FACTURA\n");
				printf("TOTA A PAGAR ES : %.2f\n",subto);
				iva=subto*0.12;
				printf("VALOR A PAGAR DEL IMPUESTO AL VALOR AGREGADO: %.2f\n",iva);
				rtot=iva+subto;
				printf("VALOR TOTAL INCLUIDO IVA: %.2f\n\n",rtot);
				printf("____________________Gracias por su visita__________________\n");
				printf("**************************************************************\n");
				printf("NUEVO PEDIDO");
				
				break;  		     
		}
	if( opc>=8 || opc<=0){
		system("cls");
		printf("Error al ingresar la opcion ");
	}
    }while(opc!=6);
    
    if(opc==6){
    system("cls");
		printf("GRACIAS POR SU VISITA********VUELVA PRONTO\N");
		

	}

	return 0;
	}
	
	
	

