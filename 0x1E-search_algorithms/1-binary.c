#include "search_algos.h"

/**
* binary_search -  function that searches for a value in a
* sorted array of integers using the Binary search algorithm.
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: first index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high, x, i;

	low = 0;
	high = size - 1;
	x = value;

	while (low <= high)
	{
    	mid = low + (high - low) / 2;

    	printf("Searching in array: ");

    	for (i = low; i < high; i++)
			  printf("%d, ", array[i]);

    	printf("%d\n", array[high]);

    	if (array[mid] == x)
			return (mid);
		else if (array[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}