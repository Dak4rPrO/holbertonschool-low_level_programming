#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: nodo cabecera (el primero)
 * @index: la posicion del nodo que nos dan
 * Return: retorna un nuevo nodo
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodoReturn;
	unsigned int comp = 0;

	if (head == NULL)
		return (NULL);

	nodoReturn = head;
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
