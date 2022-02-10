#include <stdio.h>
#include "main.h"

/**
 * main - imprime del 1 al 100,
 * los multiples de 3 se remplazan por la palabra Fizz,
 * los multiples de 5 se remplazan con la palabra Buzz
 * y los multiples de 3 y 5 con FizzBuzz
 * Return: retorna 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
