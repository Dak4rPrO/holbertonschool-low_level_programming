#include <stdio.h>
/**
 * main - imprime el alfabeto en minusculas
 * Return: si el cofigo funciona retorna 0
*/

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
