#include "main.h"

/**
 * print_sign - imprime el signo de un numero
 * @n: n es el numero aleatorio a generar
 * Return: retorna 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
