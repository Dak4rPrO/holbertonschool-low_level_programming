#include "main.h"

/**
 * _memset - function that fills memory a constant byte
 * @s : pointer
 * @b : constant byte
 * @n : memory space
 * Return: return the pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

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

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
