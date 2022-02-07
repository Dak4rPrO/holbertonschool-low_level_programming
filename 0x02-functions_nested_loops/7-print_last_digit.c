#include "main.h"

/**
 * print_last_digit - imprime un el ultimo digito
 * @n: n es el numero aleatorio a generar
 * Return: retorna el valor de n
*/

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('o' + (n % 10));

	return (n % 10);
}
