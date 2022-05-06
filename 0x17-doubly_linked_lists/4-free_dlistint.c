#include "lists.h"

/**
* free_dlistint - function that frees a list_t list.
* @head: firts node
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *newNode;

	temp = head;

	while (temp != NULL)
	{
		newNode = temp->next;
		free(temp);
		temp = newNode;
	}
}
