#include <unistd.h>
#include "main.h"
#include "1-main.c"

/**
 * main - prints the alphabet.
 * Return: Alaways 0.
 * void - si
 * print_alphabet - a
*/
void print_alphabet(void);
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		_putchar(alph);
	}
		_putchar('\n');
	return (0);
}
