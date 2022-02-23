#include "main.h"

/**
*cont - si
*@n: number given
*@x: number
*Return: If n does not have a natural square root,
*the function should return -1
*/
int cont(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (cont(n, x + 1));
}

/**
*_sqrt_recursion - function that returns the
*@n: number given
*Return: return cont
*/
int _sqrt_recursion(int n)
{
	return (cont(n, 0));
}
