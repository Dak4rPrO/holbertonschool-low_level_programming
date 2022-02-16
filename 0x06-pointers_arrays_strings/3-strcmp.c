#include "main.h"

/**
 * _strcmp - funcion para comparar 2 cadenas
 * @s1: puntero 1
 * @s2: puntero 2
 * Return: retorna el valor del puntero s1 comparado con s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
		return (*s1 - *s2);
}
