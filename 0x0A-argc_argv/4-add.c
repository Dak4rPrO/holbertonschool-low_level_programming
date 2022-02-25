#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: stores number of command-line arguments passed by the user.
 * @argv: is array of character pointers listing all the arguments.
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; b < (int)strlen(argv[a]); b++)
		{
			if (argv[a][b] >= 48 &&  argv[a][b] <= 57)
			{
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
