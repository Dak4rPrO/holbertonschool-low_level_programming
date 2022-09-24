#include <stdio.h>

/**
 * main - function to print fibonacci
 * Return: always 0
 */

int main(void)
{
	unsigned int a = 1, b = 2, c= 3, d, s = 2;

	for (d = 2; d <= 32; d++)
	{
		if (c % 2 == 0)
			s = s + c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%u\n", s);
	return (0);
}