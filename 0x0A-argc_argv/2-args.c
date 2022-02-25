#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: stores number of command-line arguments passed by the user.
 * @argv: is array of character pointers listing all the arguments.
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	return (0);
}
