#include "lists.h"

/**
* free_listint2 - function that frees a list_t list.
* @head: firts node
* temp: nodo temporal con el que recorreremos
*/

void free_listint2(listint_t **head)
{
	listint_t *temp, *nextNode;

	if (head == NULL)
		return;

	temp = *head;
	while (temp != NULL && head != NULL)
	{
		nextNode = temp;
		temp = temp->next;
		free(nextNode);
	}
	*head = NULL;
}
