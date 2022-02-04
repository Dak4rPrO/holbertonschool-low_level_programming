#include <stdio.h>
/**
 * main - imprime todos los numeros de un solo dijito separados con coma
 * Return: si el codigo funciona retorna 0
*/

int main(void)
{
	int num;

	for (num = '0' ; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');
	return (0);
}
