#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: node head
 * Return: return counter
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
