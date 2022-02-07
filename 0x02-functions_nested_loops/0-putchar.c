#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * main - imprime "_putchar"
 * Return: si el codigo funciona retornara 0
*/

int main(void)
{
	int p;
	char ch[] = "_putchar";

	for (p = 0; p <= 7; p++)
	{
		_putchar(ch[p]);
	}
	_putchar ('\n');
	return (0);
}
