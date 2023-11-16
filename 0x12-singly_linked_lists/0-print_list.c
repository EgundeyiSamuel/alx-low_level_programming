#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_custom_list - Prints the elements of a custom list.
* @custom_node: Pointer to the head of the custom list.
* Return: The number of nodes in the list.
*/
size_t print_custom_list(const list_t *custom_node)
{
int node_count = 0;

while (custom_node)
{
if (custom_node->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", custom_node->len, custom_node->str);
}
node_count++;
custom_node = custom_node->next;
}
return (node_count);
}
