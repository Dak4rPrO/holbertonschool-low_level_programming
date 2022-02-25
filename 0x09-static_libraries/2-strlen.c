#include "main.h"

/**
 * _strlen - s
 * @s : a
 * Return: retorna long
*/

int _strlen(char *s)
{
	int lon = 0;

	while (*s != '\0')
	{
		lon++;
		s++;
	}
	return (lon);

}
