#include  "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 * @array: pointer of array
 * @size: size of the matriz
 * @action: action is a pointer to the function
 * Return: always
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
