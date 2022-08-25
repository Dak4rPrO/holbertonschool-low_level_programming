#include "search_algos.h"
/**
* linear_search - function that searches for a value in an array of integers
* using the Linear search algorithm.
* @array: array is a pointer to the first element of the array to search in.
* @size:  is the number of elements in array.
* @value:  is the value to search for.
*/

int linear_search(int *array, size_t size, int value)
{
    unsigned int i = 0;
    
    if (array == NULL)
        return (-1);

    for (; i < size; i++)
        if (array[i] == value)
            printf("Value checked array [%d] = [%d]\n", i, array[i]);

    return (1);
}
