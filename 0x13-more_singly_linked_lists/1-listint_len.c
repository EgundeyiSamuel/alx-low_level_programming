#include "lists.h"

/*
* listint_len: Returns the number of elements in a linked list
* @h: Pointer to the head node of the linked list of type listint_t
*
* Iterates through the list and counts the number of nodes.
* Return: the count.
*/
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++; /* Increment counter */

/* Move to next node */
h = h->next;
}

return (num); /* Return number of nodes */
}
