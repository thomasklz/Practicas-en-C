#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int OCP,OPC1,OPC2,OPC3,i=1,cantidad;
float sub;

do{
	printf("********************* Resturant Informaticon ********************\n\n");
	printf("   *********************** Menu del dia **********************\n\n");
    printf("OPCION 1: PRIMER PLATO\n");
    printf("OPCION 2: SEGUNDO PLATO\n");
    printf("OPCION 3: JUGOS\n");
    printf("OPCION 4: Factura\n");
    printf("OPCION 5: Nuevo Pedido\n");
    printf("OPCION 6: SALIR\n");
    scanf("%i",&OCP);
    switch (OCP){


        case 1:
        printf("OPCION 1:CALDO DE POLLO $0.75\n");
        printf("OPCION 2:CALDO DE VERDE $1.OO \n");
        printf("OPCION 3:CALDO DE ROSCA $0.90\n ");
        printf("OPCION 4:SALTAR\n ");
        scanf("%i",&OPC1);
        system ("cls");
            switch(OPC1){
                case 1:
                printf("INGRESA LA CANTIDAD\n ");
                scanf("%i",&cantidad);
                sub+=cantidad*0.75;
                break;
                case 2:
                printf("INGRESA LA CANTIDAD\n ");
                scanf("%i",&cantidad);
                sub+=cantidad*1.00;
                break;
                case 3:
                printf("INGRESA LA CANTIDAD\n ");
                scanf("%i",&cantidad); 
                sub+=cantidad*0.90;
                break;
                case 4:
                sub+=0.00;
                break;
            }
        break;
        case 2:
        printf("OPCION 1:SECO DE POLLO $1.50\n ");
        printf("OPCION 2:SECO DE PESCADO $1.75\n ");
        printf("OPCION 3:ARROZ CON GUATITA $1.25\n ");
        printf("OPCION 4:SALTAR\n ");
        scanf("%i",&OPC2);
            switch(OPC2){
                case 1:
                printf("INGRESA LA CANTIDAD\n ");
                scanf("%i",&cantidad);
                sub+=cantidad*1.50;
                break;
                case 2:
                printf("INGRESA LA CANTIDAD\n ");
                scanf("%i",&cantidad);
                sub+=cantidad*1.75;
                break;
                case 3:
                printf("INGRESA LA CANTIDAD\n ");
                scanf("%i",&cantidad);
                sub+=cantidad*1.25;
                break;
                case 4:
                sub+=0.00;
                break;        
            }
		break;
        case 3:
        printf("OPCION 1:JUGO DE MELON $0.25 \n");
        printf("OPCION 2:JUGO DE LIMON $0.35 \n");
        printf("OPCION 3:JUGO DE NARANJA $0.50 \n");
        printf("OPCION 4:SALTAR\n ");
        scanf("%i",&OPC3);
        switch(OPC3){
            case 1:
            printf("INGRESA LA CANTIDAD\n ");
            scanf("%i",&cantidad);
            sub+=cantidad*0.25;
            break;
            case 2:
            printf("INGRESA LA CANTIDAD\n ");
            scanf("%i",&cantidad);
            sub+=cantidad*0.35;
            break;
            case 3:
            printf("INGRESA LA CANTIDAD\n ");
            scanf("%i",&cantidad);
            sub+=cantidad*0.50;
            break;
            case 4:
            sub+=0.00;
            break;
            }
        break;
        case 4:
            printf("EL SUBTOTAL ES:$%.2f \n",sub); 
            printf("EL IVA ES:$%.2f \n",(sub*0.12)); 
            printf("EL total ES:$%.2f \n",(sub+(sub*0.12))); 
            getch();
        break;
        case 5:
            sub=0;
        break;
        case 6:
            return 0;
        break;
        default: printf(" INGRESA LA OPCION CORRECTA \n");
    }    
}while (i==1);
	return 0;
}

