#include "main.h"

/**
 * print_alphabet - prints alphabet
 * Return: Alaways 0.
*/

void print_alphabet(void)
{
	char alph;
	char alph2;

	for (alph2 = 0; alph2 <= 9; alph2++)
	{

		for (alph = 'a' ; alph <= 'z' ; alph++)

		{
			_putchar(alph);
		}
	}
	_putchar('\n');
}
