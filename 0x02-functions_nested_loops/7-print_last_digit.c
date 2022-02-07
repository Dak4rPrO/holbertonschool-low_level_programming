#include "main.h"

/**
 * print_last_digit - imprime un el ultimo digito
 * @n: n es el numero aleatorio a generar
 * Return: retorna el valor de n
*/

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit >= 0)
	{
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		_putchar(-lastDigit + '0');
		return (-lastDigit);
	}
}
