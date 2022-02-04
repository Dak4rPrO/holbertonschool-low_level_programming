#include <stdio.h>
/**
 * main - imprime todos los numeros de un solo dijito
 * Return: si el cofigo funciona retorna 0
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
