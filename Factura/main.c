#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float iva, ivaTotal,precio1,precio2,precio3,precio4,precio5, subtPrecio, totalPrecio;
	char producto1[20], producto2[20], producto3[20],producto4[20],producto5[20];

	printf("Ingrese el primer producto \n");
	scanf("%s", &producto1);
	printf("ingrese el precio del primer producto \n");
	scanf("%f", &precio1);
	if(precio1>10){
		iva=precio1*0.12;
		ivaTotal=ivaTotal+iva;
	}
	printf("Ingrese el segundo producto \n");
	scanf("%s", &producto2);
	printf("ingrese el precio del segundo producto \n");
	scanf("%f", &precio2);
	if(precio2>10){
		iva=precio2*0.12;
	    ivaTotal=ivaTotal+iva;
	}
	printf("Ingrese el tercer producto \n");
	scanf("%s", &producto3);
	printf("ingrese el precio del tercer producto \n");
	scanf("%f", &precio3);
	if(precio3>10){
		iva=precio3*0.12;
		ivaTotal=ivaTotal+iva;
	}
	printf("Ingrese el cuarto producto \n");
	scanf("%s", &producto4);
	printf("ingrese el precio del cuarto producto \n");
	scanf("%f", &precio4);
	if(precio4>10){
		iva=precio4*0.12;
		ivaTotal=ivaTotal+iva;
	}
	printf("Ingrese el quinto producto \n");
	scanf("%s", &producto5);
	printf("ingrese el precio del quinto producto \n");
	scanf("%f", &precio5);
	if(precio5>10){
		iva=precio5*0.12;
		ivaTotal=ivaTotal+iva;
	}
	
	
	printf("Producto1: %s \t  Precio1: %f \n",producto1,precio1);
	printf("Producto2: %s \t  Precio2: %f \n",producto2,precio2);
	printf("Producto3: %s \t  Precio3: %f \n",producto3,precio3);
	printf("Producto4: %s \t  Precio4: %f \n",producto4,precio4);
	printf("Producto5: %s \t  Precio5: %f \n",producto5,precio5);
	
	subtPrecio=precio1+precio2+precio3+precio4+precio5;
	totalPrecio= subtPrecio + ivaTotal;
	printf("El subtotal es : %f \t",subtPrecio);
	printf("\n El iva es : %f \t",ivaTotal);
	printf("\n El total es : %f \t",totalPrecio);
	
	getch();
	return 0;
}
