#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: Address of the first node in the list
 * @n: Integer data to insert in the new node
 *
 * Allocates memory for new node and assigns data value
 * Initializes next pointer of new node to NULL
 * Traverses to end of list and updates last node's next
 * to point to new node
 * Return: Returns address of new node or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *last = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (last->next != NULL)
{
last = last->next;
}

last->next = new;

return (new);
}
