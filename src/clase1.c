/*
 ============================================================================
 Name        : clase1.c
 Author      : david
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SALUDO "\tHOLA DAVID APROBAMOS "

int main(void) {
	setbuf(stdout,NULL);

	int num1;
	int num2;
	float resul;
	int resul2;
	printf("ingrese un numero:");
	scanf("%d",&num1);

	printf("ingrese un numero:");
	scanf("%d",&num2);

	resul =(float) num1 / num2;
	resul2 = num1 * num2;


	printf("division es %.2f\n y y la multiplicacion es : %d",resul,resul2);
	return EXIT_SUCCESS;
}
