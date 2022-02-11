#include "main.h"

/**
 * _strlen - funcion 1
 * @s : puntero
 * Return: s
 */

int _strlen(char *s)
{
	int long = 0;

	while (*s != '\0')
	{
		long++;
		s++;
	}

	return (long);
}

/**
 * rev_string - funcion 2
 * @s: punteros
*/

void rev_string(char *s);
{
	int a = 0;
	int b = (_strlen(s) - 1);
	char tmp;

	while (a < b)
	{
		tmp = s[a];
		s[a] = s[b];
		s[b] = tmp;
		a++, b--;
	}
}
