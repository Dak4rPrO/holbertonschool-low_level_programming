#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head node’s data (n)
 * @head: firts node
 * Return: return date
*/

int pop_listint(listint_t **head)
{
	listint_t *tempDelete;
	int data;

	if (head == NULL)
		return (0);

	tempDelete = *head;
	data = tempDelete->n;
	*head = tempDelete->next;

	free(tempDelete);

	return (data);
}
