#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int
* @b: pointer to a string
* Return: retorna el numero binario traducido a decimal
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int binaryConverted = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		while (b[i] != '1' && b[i] != '0')
			return (0);

		binaryConverted <<= 1;
		binaryConverted = binaryConverted + b[i] - '0';
		i++;
	}
	return (binaryConverted);
}
