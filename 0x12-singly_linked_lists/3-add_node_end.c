#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to a pointer
 * @str: stringi
 * Return: return new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
