#include "main.h"

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
