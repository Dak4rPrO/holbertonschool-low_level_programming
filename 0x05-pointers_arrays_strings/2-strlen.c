#include "main.h"

/**
 * _strlen - s
 * @s : a
*/

int _strlen(char *s)
{
	int long = 0;

	while (*s != '\0')
	{
		long++;
		s++;
	}

	return (long);
}
