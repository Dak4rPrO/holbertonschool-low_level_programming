#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
* @s1: pointer 1
* @s2: pointer 2
* @n: variable
* Return: return
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;

	unsigned int i = 0, j = n;
	unsigned int a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		j++;

	concat = malloc(sizeof(char) * (j + 1));

	if (concat == NULL)
		return (NULL);
	j = 0;

	for (i = 0; s1[i]; i++)
		concat[j++] = s1[i];

	for (a = 0; s2[a] && a < n; a++)
		concat[j++] = s2[a];

	concat[j] = '\0';

	return (concat);
}
