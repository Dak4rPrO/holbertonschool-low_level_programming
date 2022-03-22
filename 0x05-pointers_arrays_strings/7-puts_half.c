#include "main.h"

/**
 * puts_half - funcion
 * @str: puntero
 */

void puts_half(char *str)
{
        int a = 0;

        while (str[a] != '\0')
        {
                if (a % 2 == 0)
                _putchar(str[a]);
                a++;
        }
        _putchar('\n');
}
