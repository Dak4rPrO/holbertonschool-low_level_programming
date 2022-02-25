#include "main.h"

/**
 * _strncat - codigo para conectar 2 cadenas
 * @dest: cadena "Hello "
 * @src: cadena "World\n"
 * @n: numero de bytes limites
 * Return: retorna dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_var = 0;

	while (dest[index++])
		dest_var++;

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_var++] =  src[index];
	}
	return (dest);
}
