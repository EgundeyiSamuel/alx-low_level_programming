#include "lists.h"

/**
 * print_listint - prints all elements of a linked listint_t list
 * @h: pointer to head node of linked list
 *
 * Iterates through the list and prints each node's integer
 * Returns: number of nodes in linked list
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
/* Print integer value in current node */
printf("%d\n", h->n);
num++; /* Increment counter */

/* Move to next node */
h = h->next;
}

return (num); /* Return number of nodes */
}
