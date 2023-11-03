#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - allocated space/memory using malloc
* @b: size of memory allocated
* Return: pointer to new memory allocated
*/

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
