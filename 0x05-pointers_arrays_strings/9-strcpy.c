#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int z = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; z < y ; z++)
	{
		dest[z] = src[z];
	}
	dest[y] = '\0';
	return (dest);
}
