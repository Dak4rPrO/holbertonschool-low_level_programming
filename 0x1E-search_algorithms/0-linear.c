#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array of integers
* using the Linear search algorithm.
* @array: array is a pointer to the first element of the array to search in.
* @size:  is the number of elements in array.
* @value:  is the value to search for.
* Return: position of value.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
