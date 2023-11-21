#include "lists.h"

/**
* free_listint - Frees memory allocated for each node in a linked list
* @head: Pointer to the head node of the listint_t linked list
*
* Iterates through the list freeing one node at a time
* Temporarily stores the address of next node, frees current node
* Advances head to next node in list
* Continues until all nodes are freed
*/
void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head);

head = tmp;
}
}
