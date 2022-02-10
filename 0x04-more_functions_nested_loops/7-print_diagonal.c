#include "main.h"

/**
 * print_diagonal - imprime "/" en forma de escalera
 * @n: cantidad de espaciados
 */

void print_diagonal(int n)
{
	int der;
	int aba;

	if (n > 0)
	{
		for (aba = 1; aba <= n; aba++)
		{
			for (der = 1; der < aba; der++)
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
