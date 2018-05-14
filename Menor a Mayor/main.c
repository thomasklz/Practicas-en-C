#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,num3;
           
    printf("Introduzca número 1:");
    scanf("%i",&num1);

    printf("Introduzca número 2:");
    scanf("%i",&num2);

    printf("Introduzca número 3:");
    scanf("%i",&num3);

    if (num1<num2 && num1<num3)
    {
       if (num2<num3)
       {
        printf("%i",num1);
        printf("%i",num2);
        printf("%i",num3);
       }
       else
       {
        printf("%i",num1);
        printf("%i",num3);
        printf("%i",num2);
       }
    }
    else if (num2<num1 && num2<num3)
    {
       if (num1<num3)
       {
        printf("%i",num2);
        printf("%i",num1);
        printf("%i",num3);
       }
       else
       {
        printf("%i",num2);
        printf("%i",num3);
        printf("%i",num1);
       }
    }
    else if (num3<num1 && num3<num2)
    {
       if (num1<num2)
       {
        printf("%i",num3);
        printf("%i",num1);
        printf("%i",num2);
       }
       else
       {
        printf("%i",num3);
        printf("%i",num2);
        printf("%i",num1);
       }
    }
	return 0;
}
