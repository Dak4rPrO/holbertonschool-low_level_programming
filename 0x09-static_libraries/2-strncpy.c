#include "main.h"

/**
 * _strncpy - funcion para copiar una cadena
 * @dest: texto 1
 * @src: texto 2
 * @n: valor de
 * Return: retorna dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	int idx;

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
		dest[idx] = src[idx];
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}

	return (dest);
}
