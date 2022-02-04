#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Mostrar el ultimo numero de un nuemero aleatorio
 * Return: Si el preograma funciona retornara 0
*/

int main(void)
{
		int n, lastDigit;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		{

		lastDigit = n % 10;

		if (n == 0) /* Si el numero el igual a 0 */
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
		else if (n > 5) /* Si el numero es mayor a 5 */
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
		else /* Si el numero es menor a 6 */
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
		return (0);
		}
