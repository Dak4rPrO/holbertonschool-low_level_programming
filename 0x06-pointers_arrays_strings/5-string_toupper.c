#include "main.h"

/**
 * string_toupper - cambia todas las letras minusculas de un string a mayuscula
 * @str: puntero
 * Return: retorna str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
		return (str);
}
