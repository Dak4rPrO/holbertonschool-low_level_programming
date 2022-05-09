#include "main.h"

/**
 * _strchr - function
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

/**
 * _strstr - function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: haystack
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack++);
	}
	return ('\0');
}
