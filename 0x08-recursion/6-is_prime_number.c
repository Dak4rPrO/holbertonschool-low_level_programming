#include "main.h"

/**
 * cont - function
 * @n: number
 * @i: number
 * Return: return cont
 */

int cont(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		if ((n % i == 0) && (i != 1) && (i != n))
			return (0);

		if (i == n)
			return (1);
		return (cont(n, i + 1));
	}
	return (0);
}

/**
 * is_prime_number - function that
 * @n: number
 *Return: cont
 */

int is_prime_number(int n)
{
	return (cont(n, 1));
}
