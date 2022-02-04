#include <stdio.h>
/**
 * main - imprime el alfabeto en minusculas
 * Return: si el codigo funciona retorna 0
*/

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
