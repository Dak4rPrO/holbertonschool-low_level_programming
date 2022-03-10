#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: is the number of integers passed to the function
 * @separator: separator (,).
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
