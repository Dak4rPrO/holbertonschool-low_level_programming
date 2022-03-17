#include "lists.h" case, use ":recover" or "vim -r 2-add_node.c"
    to recover the changes (see ":help recovery").
/** If you did this already, delete the swap file ".2-add_node.c.s
 * add_node - function that adds a new node at the beginning of a list_t list. this message.
 * @head: pointer to a pointer
 * @str: stringdd_node.c.swp" already exists!
 */

list_t *add_node(list_t **head, const char *str)
{
        list_t *newNode;

        newNode = malloc(sizeof(list_t));


        newNode->str = strdup(str);
        newNode->len = strlen(str);
        newNode->next = *head;

        if (newNode == NULL || str == NULL)
                return (NULL);

        *head = newNode;

        return (newNode);
}
