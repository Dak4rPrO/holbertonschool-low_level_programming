#include "main.h"

/**
 * leet - funcion que cambia letras especificas por numeros
 * @p: puntero
 * Return: retorna el valor del puntero p
 */

char *leet(char *p)
{
	int i = 0;
	int j = 0;
	char let[] = {"AaEeOoTtLl"};
	char num[] = {"4433007711"};

	for (; p[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] == let[j])
			{
				p[i] = num[j];
			}
		}
	}
	return (p);
}
