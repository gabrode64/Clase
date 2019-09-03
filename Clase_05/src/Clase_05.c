/*
 ============================================================================
 Name        : Clase_05.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define QTY_EMPLEADOS 1000
int imprimeArrayInt(int array[], int limite);
int initArrayInt(int array[], int limite, int valor);
int getArrayint(int array[],
				int limite,
				char *mensaje,
				char *mensajeError,
				int minimo,
				int maximo,
				int reintentos);
int maximoArrayInt(int array[], int limite, int cantidadElementos, int *pResultado);
int minimoArrayInt(int array[], int limite, int cantidadElementos, int *pResultado);
int promedioArrayInt(int array[], int limite, int cantidadElementos, float *pResultado);


int main(void) {

	int i;
	int edadesEmpleados[QTY_EMPLEADOS];

	if(initArrayInt(edadesEmpleados,QTY_EMPLEADOS,10) == 0)
	{
		imprimirArrayInt(edadesEmpleados,QTY_EMPLEADOS);
	}

	return EXIT_SUCCESS;
}

int initArrayInt(int array[],int limite,int valor )
{
	int i;
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			array[i]=valor;
		}

	}
	return retorno;
}

int imprimirArrayInt(int array[], int limite, int valor)
{
	int i;
	int retorno = -1;
	if(array != NULL && limite > 0){
		retorno = 0;
		for(i=0; i < limite; i++){
			printf("%d\n",array[i]);
		}
	}
	return retorno;
}
