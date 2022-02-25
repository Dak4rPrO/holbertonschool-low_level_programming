#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argv: is array of character pointers listing all the arguments.
 * @argc: stores number of command-line arguments passed by the user.
 * Return: return 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
