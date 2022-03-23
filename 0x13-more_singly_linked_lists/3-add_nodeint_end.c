#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: pointer to a pointer
 * @n: node:
 * Return: return new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(listint_t));

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
