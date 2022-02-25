#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer
 * @accept:number
 * Return: return len
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return (len);

	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}

/**
 * _strchr - function that locates a character in a string
 * @c: character
 * @s: pointer
 * Return: return s + 1, || '\0'
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
