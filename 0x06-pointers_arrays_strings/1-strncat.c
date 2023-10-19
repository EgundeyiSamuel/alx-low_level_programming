#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: a pointer pointing to the destination arr
 * @src: a pointer pointing to the string to be copied
 * @n: the number of bytes
 * Return: a pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}

	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}

	return (dest);

}
