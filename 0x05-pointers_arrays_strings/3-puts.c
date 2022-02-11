#include "main.h"

/**
 * _puts- s
 * @str : a
*/

void _puts(char *str)
{
     	while (*str != '\0')
        {
		_putchar(*str++);
        }
	_putchar('\n');
}
