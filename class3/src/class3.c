/*
 ============================================================================
 Name        : Clase_3.c
 Author      : Gabriel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#define CANTNUM 5
#include <stdio.h>
#include <stdlib.h>

int programa(int *maximo, int *minimo, int *acumulador, float *promedio, float *auxiliar, int i);

int main(void){
	int result;
	int minimo,maximo;
	float promedio;
	result = programa(&maximo,&minimo,&promedio,);
	if(result == 0){
		printf("El maximo es %d \n", maximo);
		printf("El minimo %d \n", minimo);
		printf("El promedio total es %d \n", promedio);
	}
}

int programa(int *maximo, int *minimo, int *acumulador, float *promedio, float *auxiliar, int *iter)
{
	int maximoAux;
	int minimoAux;
	int promedioAux;
	int i;

	for(i=0;i<(*iter);i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&auxiliar);
		if(i==0)
		{
			maximo=auxiliar;
			minimo=auxiliar;
			acumulador=auxiliar;
		}
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

	return 0;
}
