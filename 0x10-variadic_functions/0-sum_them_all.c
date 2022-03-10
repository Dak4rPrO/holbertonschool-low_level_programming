#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: p
 * Return: always
 */

int sum_them_all(const unsigned int n, ...)
{
	int total;
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0, total = 0; i < n; i++)
	total += va_arg(arg, int);

	if (n == 0)
		return (0);

	va_end(arg);
	return (total);
}
