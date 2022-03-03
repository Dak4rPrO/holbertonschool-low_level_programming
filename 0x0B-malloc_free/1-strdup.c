#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memo
 * @str:
 * Return: return s
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	s = malloc(sizeof(char) * i + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}

	s[i] = '\0';
	return (s);
}
