#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Mostrar un numero aleatorio, indicar si es positivo o negativo
 * Return: Si el codigo funciona retornara el valor de la variable n
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2; /* n vale un numero aleatorio */
	{
		if (n == 0) /* Si el numero es igual */
		{
			printf("is zero \n");
		}
		else if (n > 0) /* Si el numero es positivo */
		{
			printf("is positive \n");
		}
		else /* Si el numero es negativo */
		{
			printf("is negative \n");
		}
		return (0);
	}
}
