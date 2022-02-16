#include "main.h"

/**
 * reverse_array - funcion que invierte el contenido de un script de enteros
 * @a: array
 * @n: numero de elementos del array
 */

void reverse_array(int *a, int n)
{
	int j = 0;
	int tmp;

	if (n > 1)
	{
		n = n - 1;
		for (; j < n; j++)
		{
			tmp = a[n];
			a[n] = a[j];
			a[j] = tmp;
			n--;
		}
	}

}
