#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: given number
 * @index: position of the number to obtain
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitStatus;

	if (n == 0 || index > 31)
		return (-1);

	bitStatus = (n >> index) & 1;

	while (bitStatus != 0 && bitStatus != 1)
	{
		return (-1);
	}

	return (bitStatus);
}
