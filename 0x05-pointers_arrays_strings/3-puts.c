#include "main.h"

/**
 * _print_rev- codigo
 * @s : puntero
*/

void _print_rev(char *s)
{
	int a;
	int b;

	while (*s != '\0')
	{
		a++;
		++s;
	}
	for (i = a; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
