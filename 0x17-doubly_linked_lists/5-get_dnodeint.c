#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: nodo cabecera (el primero)
 * @index: la posicion del nodo que nos dan
 * Return: retorna un nuevo nodo
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nodoReturn;
	unsigned int comp = 0;

	if (head == NULL)
		return (NULL);

	nodoReturn = head;

	if (nodoReturn == NULL)
		return (NULL);

	while (comp != index)
	{
		if ((nodoReturn->next) != NULL)
			nodoReturn = nodoReturn->next;
		else
			return (NULL);
		comp++;
	}
	return (nodoReturn);
}
