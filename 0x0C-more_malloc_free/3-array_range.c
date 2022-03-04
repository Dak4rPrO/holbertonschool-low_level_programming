#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: number min
 * @max: number max
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * n);

		if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
