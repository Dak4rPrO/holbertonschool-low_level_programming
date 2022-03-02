#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars.
 * @size: size
 * @c: where the arrays starts
 * Return: return ar
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(*ar));
	if (ar == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
