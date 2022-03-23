#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: node
 * n: el numero que nos dan (el string basicamente)
 * Return: return counter
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
