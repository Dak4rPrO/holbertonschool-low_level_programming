#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: pointer to a pointer
 * @n: node:
 * Return: return new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
