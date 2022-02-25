#include <stdio.h>
#include "main.h"

/**
* main - function that prints its name, followed by a new line
* @argc: contains the number of arguments passed to the program
* @argv: is array of character pointers listing all the arguments
* Return: return 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
