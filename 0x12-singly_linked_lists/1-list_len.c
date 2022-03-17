#include "lists.h"

/**
 * list_len - function that returns the numbers of elements of a list.
 * @h: node
 * Return: return counter
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
