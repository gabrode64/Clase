/*
 ============================================================================
 Name        : Clase_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EXIT_ERROR -1

int main(void)
{
	char resultado;
	if(getChar(&resultado,"Edad?\n","Error\n",0,150,2)==0)
	{
		printf("El resultado es: %c",resultado);
	}

	return EXIT_SUCCESS;
}

