#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - a
 * Return: Si el preograma funciona retornara 0  
*/

int main(void)
{
		int n, lastDigit;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		{
			lastDigit = n % 10; 
			if (n == 0) /* Si el numero es igual */
                {
			printf("is zero \n");
		}
			else if (n > 0) /* Si el numero es positivo */
		{
			printf("is positive") 
		}
			else /* Si el numero es negativo */											
		{																			  printf("is negative \n");
		}
			return (0);
}
