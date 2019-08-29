#include <stdio.ext>
#include <stdlib.h>

int getInt( int *resultado,
			char *mensaje,
			char *mensajeError,
			int minimo,
			int maximo,
			int reintentos)
{
	int retorno = EXIT_ERROR;
	int buffer;
	if(	resultado != NULL &&
		mensaje != NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0 )
	{
		do
		{
			printf("%s",mensaje);
			__fpurge(stdin); // en windows fflush // stdin esta en <stdio_ext>
			if (scanf("%d",&buffer)==1)
			{
				if(buffer >= minimo && <= maximo)
				{
					retorno = EXIT_SUCCESS;
					*resultado = buffer;
					break;
				}
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}while(reintentos >= 0);
		}
	}
	return retorno;
}
