#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower- verifica si el caracter esta en minuscula
 * @c : c es el numero aleatorio
 * Return: retorna 1 o 0 dependiendo del resultado
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

/**
 * _isalpha - verifica si hay una letra
 * @c : si
 * Return: Always 0.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

/**
 * _abs - imprime un numero absoluto
 * @n: n es el numero aleatorio a generar
 * Return: retorna si el numero es absoluto o no
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}

/**
 * _isupper - funcion para
 * @c : d
 * Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		return (0);
}
