#include "main.h"

/**
 * rot13 - funcion que cambia letras especificas por numeros
 * @p: puntero
 * Return: retorna el valor del puntero p
 */

char *rot13(char *p)
{
	int i = 0;
	int j = 0;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; p[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (p[i] == let[j])
			{
				p[i] = rot[j];
				break;
			}
		}
	}
	return (p);
}
