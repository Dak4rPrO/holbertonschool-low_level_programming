#include  "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 * @array: pointer of array
 * @size: size of the matriz
 * @action: action is a pointer to the function
 * Return: always
 */

int int_index(int *array, int size, int (*cmp)(int));
{
	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (size > 0)
	{
		size(*array);
	}
}
