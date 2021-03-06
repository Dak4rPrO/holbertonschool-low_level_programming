#include "main.h"

/**
 * _strpbrk - function that gets the length of a prefix substring
 * @s: pointer
 * @accept:number
 * Return: return len
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
			return (s);
	}
	s++;
	}

	return ('\0');
}
