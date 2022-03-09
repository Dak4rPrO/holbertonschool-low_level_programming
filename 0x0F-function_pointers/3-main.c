#include "3-calc.h"

/**
 * main - function
 * @argc: argument count
 * @argv: array value
 * Return: always
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	function = get_op_func(argv[2]);

	if (function == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", function(num1, num2));

	return (0);
}
