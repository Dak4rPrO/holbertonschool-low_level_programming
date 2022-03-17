#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: primer nodo
 * @str: string
 * Return: retorna el nuevo nodo
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;

	if (newNode == NULL)
		return (NULL);

	*head = newNode;

	return (newNode);
}
