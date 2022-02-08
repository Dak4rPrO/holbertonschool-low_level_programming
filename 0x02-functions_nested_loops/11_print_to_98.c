#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - verifica si el numero "n" es 98
 * @n : numero aleatorio
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}

	else if (n >= 98)
	{
		printf("%d, ", n);
			n--;
	}

	else
	{
		printf("%d, ", n);
		printf("\n");
	}
}
