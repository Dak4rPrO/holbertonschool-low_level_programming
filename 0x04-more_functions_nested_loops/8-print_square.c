#include "main.h"

/**
 * print_square - imprime numerales para formar un cuadrado
 * @size : es el tamaño del cuadrado
*/

void print_square(int size)
{
	int der, aba;

	if (size > 0)

	{

		for (der = 1; der <= size; der++)
		{
			for (aba = 1; aba <= size; aba++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
