#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: Alaways 0.
*/

void print_alphabet_x10(void)
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
