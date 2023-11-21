#include "lists.h"

/*
* add_nodeint - Adds a new node at the start of a linked list
* @head: Address of the first node in the list
* @n: Integer data to insert in the new node
*
* Allocates memory for the new node, assigns data value
* Sets next pointer of new node to current head
* Updates head pointer to point to new node
* Returns address of new node or NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;

/* Update head pointer */
*head = new;

return (new);
}
