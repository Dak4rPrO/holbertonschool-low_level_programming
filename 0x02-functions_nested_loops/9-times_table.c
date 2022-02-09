#include "main.h"

/**
 * times_tables - imprime la table del 9
 */

void times_tables(void)
{
	int line;
	int column;
	int n;

	for (line = 0; line <= 9; line++)
	{
		_putchar(48);

	for (column = 1; column <= 9; column++)
	{
		n = (line * column);
		_putchar(44);
		_putchar(32);

		if (n <= 9)
		{
			_putchar(32);
			_putchar(n + 48);
		}
		else
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
	}
		_putchar('\n');
	}
}
