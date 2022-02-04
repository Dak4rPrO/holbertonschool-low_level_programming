#include <stdio.h>
/**
 * main - imprime todos los numeros de un solo dijito
 * Return: si el cofigo funciona retorna 0
*/

int main(void)
{
	char num;

	for (num = 0 ; num <= 9 ; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
