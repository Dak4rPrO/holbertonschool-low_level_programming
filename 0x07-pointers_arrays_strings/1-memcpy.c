#include "main.h"

/**
 * _memcpy - funcion para copiar una cadena
 * @dest: texto 1
 * @src: texto 2
 * @n: valor de
 * Return: retorna dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		src[i] = dest[i];

	return (dest);
}
