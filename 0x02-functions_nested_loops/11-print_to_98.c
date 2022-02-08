#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - verifica si el numero "n" es 98
 * @n : numero aleatorio
*/
void print_to_98(int n)
{
	if (n < 98)
	{
	for (n = n; n < 98; n++)
	{
		printf("%d, ", n);
	}
	printf("%d", n);
	printf("\n");
	}
	else
	{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d", n);
	printf("\n");
	}
}
