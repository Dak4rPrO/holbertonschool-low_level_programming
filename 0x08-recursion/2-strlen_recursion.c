#include "main.h"

/**
 * _strlen_recursion - function that prints a string in reverse
 * @s: pointer
 * Return: return count
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	count = _strlen_recursion(s + 1) + 1;
	return (count);
}
