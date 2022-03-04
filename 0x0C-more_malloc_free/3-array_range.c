#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: number min
 * @max: number max
 * Return: return pointer ptr
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0;
	int n = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(n * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ptr[j++] = i;

	return (ptr);
}
