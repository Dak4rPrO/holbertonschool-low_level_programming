#include "main.h"

/**
 * reverse_array - funcion que invierte el contenido de un script de enteros
 * @a: array
 * @n: numero de elementos del array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n;
	int tmp;

	for (; a[i]; i++)
		if (i >= n)
		break;
	j--;

		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

}
