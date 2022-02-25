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
	int num1, num2, result;

	if (argc > 2)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
