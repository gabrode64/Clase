/*
 ============================================================================
 Name        : Clase_3.c
 Author      : Gabriel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int maximo;
	int minimo;
	int acumulador;
	int auxiliar;
	int promedio;
	int i;

	printf("Ingrese un numero: ");
	scanf("%d",&auxiliar);
	maximo=auxiliar;
	minimo=auxiliar;
	acumulador=auxiliar;

	for(i=0;i<=4;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&auxiliar);
		acumulador=acumulador+auxiliar;

		if(auxiliar>maximo)
		{
			maximo=auxiliar;
		}

		if(auxiliar<minimo)
		{
			minimo=auxiliar;
		}
	}

	promedio=acumulador/5;
	printf("El maximo es %d", maximo);
	printf("El minimo %d", minimo);
	printf("El promedio total es %d", promedio);
	return 0;
}
