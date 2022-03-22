#include "lists.h"

/**
* free_listint2 - function that frees a list_t list.
* @head: firts node
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
