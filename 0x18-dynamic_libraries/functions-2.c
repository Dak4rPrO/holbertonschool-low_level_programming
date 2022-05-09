#include "main.h"

/**
 * _isdigit - check the code
 * @c : l
 * Return: Always 0.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

/**
 * _strlen - s
 * @s : a
 * Return: retorna long
*/

int _strlen(char *s)
{
	int lon = 0;

	while (*s != '\0')
	{
		lon++;
		s++;
	}
	return (lon);

}

/**
 * _puts - codigo
 * @str : puntero
*/

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}

/**
 *_strcpy - asd
 *@dest: asd
 *@src: asd
 *Return: asd
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

/**
 *_atoi - asd
 *@s: asd
 *Return: asd
 */
int _atoi(char *s)
{
	int op = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			op *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++);

	return (n * op);
}
